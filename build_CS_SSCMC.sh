#!/bin/bash

# Inputs folder given as first argument
# contains model.cpp and model.h
inputs_folder=./ABC_input_files/input_files_SSCMC

export LD_LIBRARY_PATH=/share/apps/boost-1.72-python3/lib:${LD_LIBRARY_PATH}
export C_INCLUDE_PATH=$C_INCLUDE_PATH:/share/apps/boost-1.72-python3

ABC_folder=./ABC/

/share/apps/gcc-9.2.0/bin/g++ -std=c++11 -g -w -shared -o ${inputs_folder}/population_modules.so -Wall -fPIC -fopenmp  \
$ABC_folder/particle_sim_opemp.cpp \
${inputs_folder}/model.cpp \
$ABC_folder/distances.cpp \
$ABC_folder/population.cpp \
$ABC_folder/kissfft/kiss_fft.c \
$ABC_folder/kissfft/kiss_fftr.c \
-I/share/apps/boost-1.72-python3/include \
-lboost_system -lboost_python37 \
-I/share/apps/python-3.7.2-shared/include/python3.7m/ \
-L/share/apps/boost-1.72-python3/lib \
-I ${inputs_folder}
