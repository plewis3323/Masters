#!/bin/bash

# Argument from Condor: path to one tuple file or filelist
#TUPLE_PATH="$1"

# Basic environment
export USER="$(id -u -n)"
export LOGNAME="plewis3323"
export HOME="/sphenix/u/plewis3323"

# Absolute path of script directory
this_script=$(readlink -f "${BASH_SOURCE}")
this_dir=$(dirname "${this_script}")

# Setup sPHENIX environment
source /opt/sphenix/core/bin/sphenix_setup.sh -n
export MYINSTALL="/sphenix/user/plewis3323/install"
source /opt/sphenix/core/bin/setup_local.sh "${MYINSTALL}"
export LD_LIBRARY_PATH="${MYINSTALL}/lib:${LD_LIBRARY_PATH}"

echo " "
echo "START: $(date)"
echo " "

if [[ -n "$_CONDOR_SCRATCH_DIR" && -d "$_CONDOR_SCRATCH_DIR" ]]; then
    cd "$_CONDOR_SCRATCH_DIR"
    cp /sphenix/user/plewis3323/MainMastersWork/macro/RunEta_B_2Loop.C .
    cp /sphenix/user/plewis3323/MainMastersWork/macro/GetTChainMacro.C .
    cp -r /sphenix/user/plewis3323/MainMastersWork/macro/filelist .
else
    echo "Condor scratch directory NOT set or inaccessible"
    exit 1
fi

# Debugging output
pwd
ls -l

# Run ROOT macro
root.exe -b -q "RunEta_B_2Loop.C($1)"

# Transfer results back explicitly
#mkdir -p /sphenix/user/plewis3323/practice/macro/RESULTS
#cp run24_loop_*.root /sphenix/user/plewis3323/practice/macro/RESULTS/

# Finish script
echo ' '
echo "END: $(date)"
echo ' '



