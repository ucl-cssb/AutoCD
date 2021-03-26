import numpy as np
import pandas as pd
import glob
import os
import pickle
from . import combine_outputs
import tarfile
import shutil
import sys


def make_tarfile(output_filename, source_dir):
    with tarfile.open(output_filename, "w:gz") as tar:
        tar.add(source_dir, arcname=os.path.basename(source_dir))


def reload_experiment_from_posterior(posterior_path, init_species, init_params, sim_idx, batch_num):
    df = pd.read_csv(posterior_path)
    df = df.loc[df['sim_idx'] == sim_idx]
    df = df.loc[df['batch_num'] == batch_num]
    df = df.iloc[0]
    print(df)
    for param, _ in init_params.items():
        init_params[param] = [df[param], df[param]]

    for species, _ in init_species.items():
        init_params[species] = [df[species], df[species]]

    return init_species, init_params


##
# Generates particles consisting of a initial state and parameter sample from a list of models.
#
##
def generate_particles(models_list):
    pop_model_refs = [m.get_model_ref() for m in models_list]
    pop_params_list = []
    init_state_list = []

    for m in models_list:
        params = m.sample_particle()
        init_state = m.sample_init_state()

        init_state_list.append(init_state)
        pop_params_list.append(params)

    return init_state_list, pop_params_list, pop_model_refs


##
# Compares the distances of each species of each particle to the epsilons in the distance
# array.
#
# Returns a list of bools True - accept particle, False - reject particle
##
def check_distances_generic(particle_distances, epsilon_array):
    particle_judgements = []

    for part_distance in particle_distances:
        particle_accept = True

        for species_distances in part_distance:
            if np.isnan(species_distances).any() or any(p > 1e300 for p in species_distances):
                particle_accept = False

            for epsilon_idx, dist in enumerate(species_distances):
                if dist > epsilon_array[epsilon_idx]:
                    particle_accept = False

        particle_judgements.append(particle_accept)

    return particle_judgements


def check_distances_osc(particle_distances, epsilon_array):
    particle_judgements = []
    for part_distance in particle_distances:
        particle_accept = True

        for species_distances in part_distance:
            # Check if any of the distances for the fitted species are infinite or overflow
            if np.isnan(species_distances).any() or any(p > 1e300 for p in species_distances):
                particle_accept = False

            for epsilon_idx, dist in enumerate(species_distances):
                # threshold_amplitudes_count, 
                if epsilon_idx == 0 and dist < epsilon_array[epsilon_idx]:
                    particle_accept = False


                # final_amplitude
                elif epsilon_idx == 1 and dist < epsilon_array[epsilon_idx]:
                    particle_accept = False

                # signal_period_freq
                elif epsilon_idx == 2 and dist > epsilon_array[epsilon_idx]:
                    particle_accept = False

        particle_judgements.append(particle_accept)
        # print(particle_judgements)

    return particle_judgements


def check_distances_survival(particle_distances, epsilon_array):
    particle_judgements = []

    for part_distance in particle_distances:
        particle_accept = True

        for species_distances in part_distance:
            if np.isnan(species_distances).any() or any(p > 1e300 for p in species_distances):
                particle_accept = False

            for epsilon_idx, dist in enumerate(species_distances):
                if dist > epsilon_array[epsilon_idx]:
                    particle_accept = False

        particle_judgements.append(particle_accept)

    return particle_judgements


def update_epsilon(current_epsilon, final_epsilon, accepted_particle_distances, alpha):
    n_epsilon = len(final_epsilon)

    n_keep = int(alpha * len(accepted_particle_distances))
    new_epsilon = [0 for x in range(n_epsilon)]

    # Iterate species in each accepted simulation
    for e_idx in range(n_epsilon):

        # List of distances for this particular epsilon
        epsilon_accepted_distances = []

        # Iterate particles, keeping the largest distance in the species list
        for part_dists in accepted_particle_distances:
            epsilon_accepted_distances.append(max(part_dists[:, e_idx]))

        epsilon_accepted_distances.sort()
        epsilon_accepted_distances = epsilon_accepted_distances[:n_keep]
        new_epsilon[e_idx] = epsilon_accepted_distances[-1]

    for e_idx, new_e in enumerate(new_epsilon):
        if new_e < final_epsilon[e_idx]:
            new_epsilon[e_idx] = final_epsilon[e_idx]

    return new_epsilon


def fsolve_conversion(y, pop_obj, particle_ref, n_species):
    if type(y) == np.ndarray:
        y = y.tolist()

    sol = pop_obj.py_model_func(y, particle_ref)

    return sol


def fsolve_jac_conversion(y, pop_obj, particle_ref, n_species):
    if type(y) == np.ndarray:
        y = y.tolist()

    jac = pop_obj.get_particle_jacobian(y, particle_ref)

    jac = np.reshape(jac, (n_species, n_species))

    return jac


def make_posterior_kdes(model, posterior_df, init_params, init_species):
    for param_key, _ in init_params.items():
        posterior_values = posterior_df[param_key].values
        model.alt_generate_params_kde(posterior_values, param_key)

    for species_key, _ in init_species.items():
        posterior_values = posterior_df[species_key].values
        model.alt_generate_params_kde(posterior_values, species_key)


def get_pdf_uniform(lower_bound, upper_bound, x):
    if (x > upper_bound) or (x < lower_bound):
        return 0.0

    else:
        pdf_res = 1 / (upper_bound - lower_bound)
        return pdf_res


def get_pdf_gauss(mean, scale, x):
    x = np.exp(-0.5 * (x - mean) * (x - mean) / (scale * scale))
    x = x / (scale * np.sqrt(2 * np.pi))
    return x


def get_wt_var(x_list, weights_list):
    sum_w = sum(weights_list)
    sum_w2 = sum([w ** 2 for w in weights_list])
    x_bar_wt = sum([(w * x) for (w, x) in zip(weights_list, x_list)]) / sum_w
    ret = sum([(w * (x - x_bar_wt) ** 2) for (w, x) in zip(weights_list, x_list)]) * sum_w / ((sum_w ** 2) - sum_w2)

    return ret


def get_parameter_kernel_pdf(params, params0, scale, non_constant_idxs, prior, aux_info, use_uniform_kernel=False,
                             use_normal_kernel=False):
    prob = 1.0
    for idx in non_constant_idxs:
        if use_uniform_kernel:
            kern = get_pdf_uniform(params0[idx] - scale[idx], params0[idx] + scale[idx], params[idx])

        elif use_normal_kernel:
            mean = params0[idx]
            kern = get_pdf_gauss(mean, scale=np.sqrt(scale[idx]), x=params[idx])

            if np.isnan(kern):
                print(mean)
                exit(0)

            kern = kern / aux_info[idx]

        prob = prob * kern

    return prob


def rescale_parameters(input_params, init_states, particle_models):
    for particle_params, particle_init_state, model in zip(input_params, init_states, particle_models):
        for idx, id in enumerate(sorted(model._params_prior, key=str.lower)):
            if model._params_prior[id][2] == "log":
                particle_params[idx] = np.exp(particle_params[idx])

        for idx, id in enumerate(model._init_species_prior):
            if model._init_species_prior[id][2] == "log":
                particle_init_state[idx] = np.exp(particle_init_state[idx])


def find_latest_population_pickle(exp_folder):
    sub_dirs = glob.glob(exp_folder + "**/")
    population_dirs = [f for f in sub_dirs if "Population" in f]

    if len(population_dirs) == 0:
        return None

    # Get folder name
    population_names = [f.split('/')[-2] for f in population_dirs]

    population_dirs = [x for y, x in
                       sorted(zip(population_names, population_dirs), key=lambda y: int(y[0][-1]), reverse=True)]

    # Return top population dir
    for f in population_dirs:
        for idx in range(len(population_names)):
            pickles = glob.glob(f + "checkpoint.pickle")

            if len(pickles) == 0:
                continue

            elif len(pickles) > 1:
                print("Only one pickle should exist, exiting... ", population_names[-idx])

            else:
                return pickles[0]

        idx += 1

    return None


def combine_model_refs_and_counts(master_alg, sub_alg):
    master_unique_models = master_alg.model_space._model_list
    master_unique_model_idxs = [m._model_ref for m in master_unique_models]

    sub_unique_models = sub_alg.model_space._model_list
    sub_unique_model_idxs = [m._model_ref for m in sub_unique_models]

    sampled_count = {}
    accepted_count = {}
    for master_m_idx in master_unique_model_idxs:
        sub_m_idx = sub_unique_model_idxs.index(master_m_idx)
        sub_m = sub_unique_models[sub_m_idx]

        master_m = [m for m in master_unique_models if m._model_ref == master_m_idx][0]
        # master_unique_models[master_m_idx]
        master_m.population_sample_count[-1] += sub_m.population_sample_count[-1]
        master_m.population_accepted_count[-1] += sub_m.population_accepted_count[-1]


def make_long_format_model_space_report(pickle_path_list, output_dir):
    # df = pd.DataFrame(columns=['model_idx', 'accepted_count', 'simulated_count', 'model_marginal', 'exp_idx'])

    exp_df_list = []
    for idx, p_path in enumerate(pickle_path_list):
        p_dir = "/".join(p_path.split('/')[:-1]) + "/"
        try:
            p_model_space_report = pd.read_csv(p_dir + "model_space_report.csv", index_col=None)
        except:
            continue
        p_model_space_report = p_model_space_report.loc[:, ~p_model_space_report.columns.str.contains('^Unnamed')]
        p_model_space_report['exp_idx'] = idx
        exp_df_list.append(p_model_space_report)

    long_df = pd.concat(exp_df_list, ignore_index=True)
    print(long_df)

    file_path = output_dir + "model_space_report_long.csv"
    long_df.to_csv(file_path)


def combine_population_pickles(data_dir, n_chunks):
    exp_dirs = glob.glob(data_dir + "**/")
    population_pickles_list = []

    pickle_path_list = []

    experiment_name = "chunk_"

    total_acc = 0
    for d in exp_dirs:
        pickle_path = find_latest_population_pickle(d)

        if pickle_path:
            pickle_path_list.append(pickle_path)

    pickle_path_list = pickle_path_list
    # make_long_format_model_space_report(pickle_path_list, data_dir)

    split_pickle_paths = np.array_split(pickle_path_list, n_chunks)

    print(len(pickle_path_list))
    print(np.shape(split_pickle_paths))

    for chunk_idx, chunk in enumerate(split_pickle_paths):
        print("Doing chunk: ", chunk_idx)
        pickle_path_list = chunk

        chunk_out_dir = data_dir + experiment_name + str(chunk_idx) + "/Population_end/"

        total_acc = 0
        with open(pickle_path_list[0], 'rb') as handle:
            master_dir = "/".join(pickle_path_list[0].split('/')[:-1]) + "/"
            master_alg = pickle.load(handle)
            print("copying master alg object")
            shutil.copytree(master_dir, chunk_out_dir)
            # master_alg.model_space.accepted_particles = master_alg.population_accepted_particles

            # master_alg.model_space.update_population_sample_data(master_alg.population_model_refs, master_alg.population_judgements)

            # if master_alg.population_number == 0:
            #     for p in master_alg.model_space.accepted_particles:
            #         p.curr_weight = 1

            # else:
            #     master_alg.model_space.compute_particle_weights()

            # master_alg.model_space.normalize_particle_weights()
            # combine_outputs.combine_distances_individually(chunk_out_dir, chunk_out_dir)

            print(
                "loading up judgements, model_refs, accepted_particles, population_accepted_count and population_total_simulations")

            idx = 0
            for p_path in (pickle_path_list):
                try:
                    with open(p_path, 'rb') as p_handle:

                        p_dir = "/".join(p_path.split('/')[:-1]) + "/"
                        p = pickle.load(p_handle)
                        total_acc += (len(p.population_accepted_particles))

                        print(p_path)

                        # p.model_space.accepted_particles = p.population_accepted_particles
                        # p.model_space.update_population_sample_data(p.population_model_refs, p.population_judgements)

                        # if p.population_number == 0:
                        #     for particle in p.model_space.accepted_particles:
                        #         particle.curr_weight = 1

                        # else:
                        #     p.model_space.compute_particle_weights()

                        # p.model_space.normalize_particle_weights()

                        master_alg.population_judgements += p.population_judgements
                        master_alg.population_model_refs += p.population_model_refs
                        master_alg.population_accepted_particles += p.population_accepted_particles
                        master_alg.population_accepted_count += p.population_accepted_count
                        master_alg.population_total_simulations += p.population_total_simulations

                        combine_model_refs_and_counts(master_alg, p)
                        combine_outputs.combine_model_sim_params(chunk_out_dir, p_dir, chunk_out_dir)
                        combine_outputs.combine_distances_individually(p_dir, chunk_out_dir)

                except EOFError:
                    print("loading error")
                    continue
                idx += 1

            master_alg.model_space.accepted_particles = master_alg.population_accepted_particles

            # Get all model references
            model_refs_list = master_alg.model_space._model_refs_list

            for particle in master_alg.population_accepted_particles:
                part_model_ref = particle.curr_model._model_ref

                # Find matching index in model ref list
                master_model_idx = model_refs_list.index(part_model_ref)
                master_model_obj = master_alg.model_space._model_list[master_model_idx]

                # Reassign
                particle.curr_model = master_model_obj
                # print(particle.curr_weight)

            print("Updating model sample data")
            # master_alg.model_space.update_population_sample_data(master_alg.population_model_refs, master_alg.population_judgements)

            # if master_alg.population_number == 0:
            #     for p in master_alg.model_space.accepted_particles:
            #         p.curr_weight = 1

            # else:
            #     master_alg.model_space.compute_particle_weights()

            print("normalising particle weights")
            master_alg.model_space.normalize_particle_weights()
            print(sum([p.curr_weight for p in master_alg.model_space.accepted_particles]))

            print("Updating model marginals")
            master_alg.model_space.update_model_marginals()

            print("Preparing next population")
            master_alg.model_space.prepare_next_population()

            print("generating model kernels")

            print("counting dead models")
            master_alg.model_space.count_dead_models()

            print("Generating model space report")
            master_alg.model_space.model_space_report(chunk_out_dir, use_sum=False)

            # print("\n\n")
            # print("Current particle weights:")
            # for p in self.model_space.accepted_particles:
            #     print(p.curr_weight)

            master_alg.current_epsilon = update_epsilon(master_alg.current_epsilon, master_alg.final_epsilon,
                                                        master_alg.population_accepted_particle_distances, alpha=0.1)

            print("Current epsilon: ", master_alg.current_epsilon)
            print("Starting new population... ")
            print("")
            master_alg.population_number += 1
            master_alg.population_accepted_count = 0
            master_alg.population_total_simulations = 0
            master_alg.population_accepted_particle_distances = []
            master_alg.population_model_refs = []
            master_alg.population_judgements = []
            master_alg.population_accepted_particles = []
            master_alg.save_object_pickle(chunk_out_dir + "master_pickle_pop_1_chunk_" + str(chunk_idx) + "_")


if __name__ == "__main__":
    combine_population_pickles()
