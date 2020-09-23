#!/bin/bash

# Inputs folder given as first argument
# contains model.cpp and model.h
inputs_folder=./ABC_input_files/input_files_SSCMC

ABC_folder=./ABC/

gcc-8 -std=c++11 -g -w -shared -o ${inputs_folder}/population_modules.so -Wall -fPIC -fopenmp  \
$ABC_folder/particle_sim_opemp.cpp \
${inputs_folder}/model.cpp \
$ABC_folder/distances.cpp \
$ABC_folder/population.cpp \
$ABC_folder/kissfft/kiss_fft.c \
$ABC_folder/kissfft/kiss_fftr.c \
-lboost_system -lboost_python3-py36 \
-I/usr/include/python3.6m/ \
-I ${inputs_folder}
