## Instructions

1. Open **Developer Command Prompt for Visual Studio**.
2. Navigate to your project folder:

Example: cd "C:\Users\micai\OneDrive\Desktop\Centaurus-mergesort"

3. compile: cl /EHsc main.cpp

4. run: 
main.exe          # default array size = 10
main.exe 50       # array size = 50

# Merge Sort on Centaurus

## Commands

ssh mproffi2@hpc-student.uncc.edu

Clone repo

git clone https://github.com/mproffi2/centaurus-mergesort.git
cd centaurus-mergesort

module load gcc
make

sbatch run_benchmark.sh

cat benchmark_output.txt