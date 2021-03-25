from . import algorithms
from .model_space import Model
import xml.etree.ElementTree as ET
import csv
import os
from .model_space import ModelSpace
from . import algorithm_utils as alg_utils
import numpy as np
import matplotlib as mpl

import matplotlib.pyplot as plt
from operator import mul
from . import classification
import seaborn as sns;

sns.set()
from scipy.optimize import fsolve

import sys
import glob

import pandas as pd
import pickle

import tarfile
import yaml
import argparse

from shutil import copy


def import_input_file(input_path):
    data_dict = {}
    with open(input_path) as fin:
        reader = csv.reader(fin, skipinitialspace=True)
        for row in reader:
            data_dict[row[0]] = [float(i) for i in row[1:]]

    return data_dict


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--ABC_config', type=str)
    parser.add_argument('--MSG_config', type=str)
    parser.add_argument('--DA_config', type=str)

    parser.add_argument("--exp_num", required=False, default=0)
    args = parser.parse_args()

    config_yaml_path = args.ABC_config
    exp_num = args.exp_num

    # Unpack ABC arguments
    with open(config_yaml_path, 'r') as yaml_file:
        experiment_config = yaml.load(yaml_file, Loader=yaml.FullLoader)
        experiment_config['final_epsilon'] = [float(x) for x in experiment_config['final_epsilon']]
        experiment_config['initial_epsilon'] = [float(x) for x in experiment_config['initial_epsilon']]

        # Unpack config file
        input_folder = experiment_config['inputs_folder']
        output_folder = experiment_config['output_folder']
        experiment_name = experiment_config['experiment_name']

        t_0 = experiment_config['t_0']
        t_end = experiment_config['t_end']
        dt = experiment_config['dt']
        fit_species = experiment_config['fit_species']
        final_epsilon = experiment_config['final_epsilon']
        initial_epsilon = experiment_config['initial_epsilon']

        population_size = experiment_config['population_size']
        n_sims_batch = experiment_config['n_sims_batch']

        distance_function_mode = experiment_config['distance_function_mode']
        run_rejection = experiment_config['run_rejection']
        run_SMC = experiment_config['run_SMC']

        compress_output = experiment_config['compress_output']

        alpha = experiment_config['alpha']

        abs_tol = float(experiment_config['abs_tol'])
        rel_tol = float(experiment_config['rel_tol'])


    exp_output_folder = output_folder + experiment_name

    try:
        os.mkdir(exp_output_folder)

    except FileExistsError:
        pass

    exp_output_folder = output_folder + '/' + experiment_name + '_' + str(exp_num) + '/'

    # latest_pickle_path = alg_utils.find_latest_population_pickle(exp_output_folder)
    # print(latest_pickle_path)

    ABC_algs = None

    try:
        os.mkdir(exp_output_folder)

    except FileExistsError:
        pass

    # Load models from input files
    model_list = []
    for i in range(int((len(os.listdir(input_folder)) / 2))):
        input_params = input_folder + "params_" + str(i) + ".csv"
        input_init_species = input_folder + "species_" + str(i) + ".csv"
        init_params = import_input_file(input_params)
        init_species = import_input_file(input_init_species)

        model_new = Model(i, init_params, init_species)
        model_list.append(model_new)

    # Run ABC_rejection algorithm
    ABC_algs = algorithms.ABC(t_0, t_end, dt, exp_num=exp_num, model_list=model_list, population_size=population_size,
                              n_sims_batch=n_sims_batch,
                              fit_species=fit_species, initial_epsilon=initial_epsilon, final_epsilon=final_epsilon,
                              distance_function_mode=distance_function_mode,
                              n_distances=len(final_epsilon), abs_tol=abs_tol, rel_tol=rel_tol,
                              out_dir=exp_output_folder)

    if run_rejection == "Y":
        ABC_algs.current_epsilon = final_epsilon

    ABC_algs.run_model_selection_ABC_SMC(alpha=alpha)

    copy(config_yaml_path, exp_output_folder)

    if compress_output == "Y":
        alg_utils.make_tarfile(exp_output_folder[0:-1] + "_pop_" + str(ABC_algs.population_number) + ".tar.gz",
                               exp_output_folder)
