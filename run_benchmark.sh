#!/bin/bash
#SBATCH --job-name=mergeSortBench
#SBATCH --partition=Centaurus
#SBATCH --time=00:10:00        # 10 minutes max
#SBATCH --output=benchmark_output.txt

# module load gcc

# Compile program
g++ -std=c++11 -O2 main.cpp -o mergeSort

# Array sizes (powers of 10)
sizes=(10 100 1000 10000 100000 1000000 10000000 100000000)

# Loop over sizes
for size in "${sizes[@]}"
do
    echo "Array size: $size" >> benchmark_output.txt
    START=$(date +%s%N)
    ./mergeSort $size
    END=$(date +%s%N)
    DIFF=$((END-START))
    TIME_MS=$((DIFF/1000000))
    echo "Time (ms): $TIME_MS" >> benchmark_output.txt
    echo "----------------------" >> benchmark_output.txt
done