from ModelSpaceGenerator import run_model_space_generator
from data_analysis import run_data_analysis
import subprocess
import os
import argparse
import yaml
from shutil import copy

parser = argparse.ArgumentParser()
parser.add_argument('--MSG_config', type=str)
parser.add_argument('--ABC_config', type=str)
parser.add_argument('--DA_config', type=str)
parser.add_argument("--exp_num", required=False, default=0)

args = parser.parse_args()

MSG_config_yaml_path = args.MSG_config
ABC_config_yaml_path = args.ABC_config
DA_config_yaml_path = args.DA_config


def main():
    if args.MSG_config is None:
        print("No MSG config, skipping model space generation... ")

    else:
        print("Running model space generation... \n")
        run_model_space_generator.main()

        print("Building python library... \n")
        with open(MSG_config_yaml_path, 'r') as yaml_file:
            MSG_config = yaml.load(yaml_file, Loader=yaml.FullLoader)

        build_file_path = "./build_pop_modules.sh"
        build_arguments = MSG_config['output_dir'] + MSG_config['model_space_name'] + '/'

        # Call build for C++ modules, first argument
        # pointing to where model.cpp and model.h are
        subprocess.check_call([build_file_path, build_arguments])

    if args.ABC_config is None:
        print("No ABC config, skipping ABC... ")

    else:
        with open(args.ABC_config, 'r') as yaml_file:
            experiment_config = yaml.load(yaml_file, Loader=yaml.FullLoader)

        module_path = experiment_config['population_modules_path']
        if os.path.isfile(module_path) and os.access(module_path, os.R_OK):
            print("population.modules.so exists...")

        else:
            print("population.modules.so missing, attempting to build... ")
            build_file_path = "./build_pop_modules.sh"
            build_arguments = MSG_config['output_dir'] + MSG_config['model_space_name'] + '/'

            # Call build for C++ modules, first argument
            # pointing to where model.cpp and model.h are
            subprocess.check_call([build_file_path, build_arguments])


        # Copy population_modules.so to ABC folder
        copy(module_path, './ABC/')

        # ABC should only be imported once population_modules.so file exists in directory
        from ABC import run_ABC

        print("Running model space generation... ")
        run_ABC.main()

    if args.DA_config is None:
        print("No ABC config, skipping ABC... ")

    else:
        with open(args.DA_config, 'r') as yaml_file:
            data_analysis_config = yaml.load(yaml_file, Loader=yaml.FullLoader)

        run_data_analysis.main(data_analysis_config)


if __name__ == "__main__":
    main()
