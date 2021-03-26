#$ -l tmem=450M,h_vmem=450M,h_rt=96:0:0,tscratch=4G
#$ -S /bin/bash
#$ -N bk_SSMC_0_SMC
#$ -R y
#$ -t 1-3
#$ -pe smp 3

# Load share python library
source /share/apps/source_files/python/python-3.7.2.source 

# Set output name
OUTPUT_NAME=SSMC_0_SMC

# Set username
USERNAME=USER


# Set config file path
ABC_CONFIG=./config_files/ABC_SSCMC.yaml

# Explicitly set available threads
export OMP_NUM_THREADS=3
echo "$OMP_NUM_THREADS"

AutoCD_DIR=$HOME/ucl-cssb/AutoCD



cd $AutoCD_DIR


### 
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/lib64
export PATH=/share/apps/python-3.7.2-shared/bin:${PATH}
export PYTHONPATH=$PYTHONPATH:/share/apps/python-3.7.2-shared/bin

export LD_LIBRARY_PATH=/share/apps/python-3.7.2-shared/lib:${LD_LIBRARY_PATH}
export LD_LIBRARY_PATH=/share/apps/boost-1.72-python3/lib:${LD_LIBRARY_PATH}
export LD_LIBRARY_PATH=/share/apps/gcc-9.2.0/lib:${LD_LIBRARY_PATH}
export LD_LIBRARY_PATH=/share/apps/gcc-9.2.0/lib64:${LD_LIBRARY_PATH}

export INCLUDE=$INCLUDE:/share/apps/python-3.7.2-shared/
export INCLUDE=$INCLUDE:/share/apps/boost-1.72-python3/include

export C_INCLUDE_PATH=/share/apps/python-3.7.2-shared/include:${C_INCLUDE_PATH}
export C_INCLUDE_PATH=$C_INCLUDE_PATH:/share/apps/boost-1.72-python3
export C_INCLUDE_PATH=/share/apps/python-3.7.2-shared:${C_INCLUDE_PATH}


# Kill function to clean tmp
function finish {
    rm -rf /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}
}


echo "Making output dir in tmpdir"
mkdir -p /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}/output


echo "copying inputfiles to tmpdir"
cp -R ABC_input_files /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}


cp -R ABC /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}
cp -R config_files /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}
cp -R ModelSpaceGenerator /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}
cp -R data_analysis /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}

cp ./*.py /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}

cd /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}
pwd
ls

trap finish EXIT ERR SIGTERM SIGKILL INT

echo "Running experiment"
python3 run_AutoCD.py --ABC_config $ABC_CONFIG --exp_num $SGE_TASK_ID  >> $AutoCD_DIR/output/log.${OUTPUT_NAME}_${SGE_TASK_ID}

pwd

cd output
pwd
ls

cp /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}/output/*.tar.gz $AutoCD_DIR/output/
rm -r /scratch0/${USERNAME}/${OUTPUT_NAME}_${SGE_TASK_ID}

echo "finished"
