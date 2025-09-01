## Instructions

1. Open **Developer Command Prompt for Visual Studio**.
2. Navigate to your project folder:

Example: cd "C:\Users\micai\OneDrive\Desktop\Centaurus-mergesort"

3. compile: cl /EHsc main.cpp

4. run: 
main.exe          # default array size = 10
main.exe 50       # array size = 50


## Centaurus Instructions

git clone https://github.com/mproffi2/centaurus-mergesort.git
cd centaurus-mergesort

Load GCC compiler: module load gcc


Compile program: make


Run benchmark: sbatch run_benchmark.sh


Check job status: squeue -u mproffi2


View results: cat benchmark_output.txt