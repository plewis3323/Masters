#!/bin/bash

# Environment Setup
export USER="$(id -u -n)"
export LOGNAME="plewis3323"
export HOME="/sphenix/u/plewis3323"

# Absolute path of script directory
this_script=$(readlink -f "${BASH_SOURCE}")
this_dir=$(dirname "${this_script}")

# Source sPHENIX environment
source /opt/sphenix/core/bin/sphenix_setup.sh -n
export MYINSTALL="/sphenix/user/plewis3323/install"
source /opt/sphenix/core/bin/setup_local.sh "${MYINSTALL}"

# Update LD_LIBRARY_PATH
export LD_LIBRARY_PATH="${MYINSTALL}/lib:${LD_LIBRARY_PATH}"

# Timestamp for job start
echo " "
echo "START: $(date)"
echo " "

# Check Condor scratch directory
if [[ -n "$_CONDOR_SCRATCH_DIR" && -d "$_CONDOR_SCRATCH_DIR" ]]; then
    cd "$_CONDOR_SCRATCH_DIR"
    # Copy necessary files explicitly to Condor scratch
    cp /sphenix/user/plewis3323/practice/macro/RunEtBLoop.C .
    cp /sphenix/user/plewis3323/practice/macro/GetTChainMacro.C .
    cp -r /sphenix/user/plewis3323/practice/macro/filelist .
else
    echo "Condor scratch directory NOT set or inaccessible"
    exit 1
fi

# Debugging output
pwd
ls -l

# Run ROOT macro
root.exe -b -q "RunEtBLoop.C()"

# Transfer results back explicitly
#mkdir -p /sphenix/user/plewis3323/practice/macro/RESULTS
#cp run24_loop_*.root /sphenix/user/plewis3323/practice/macro/RESULTS/

# Finish script
echo ' '
echo "END: $(date)"
echo ' '

