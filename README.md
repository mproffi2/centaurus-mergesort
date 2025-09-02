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

plot points: python3 plot.py

Download png of plot: scp -o MACs=hmac-sha2-256 mproffi2@hpc-student.uncc.edu:/users/mproffi2/centaurus-mergesort/benchmark_plot.png C:\Users\micai\Downloads\

## RESULTS

The results made sense to me, it took longer to sort the bigger the array.