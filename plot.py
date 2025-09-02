import matplotlib.pyplot as plt

# Lists to hold data
sizes = []
times_ms = []

# Read benchmark data
with open("benchmark_output.txt", "r") as f:
    for line in f:
        line = line.strip()
        if line.startswith("Array size:"):
            sizes.append(int(line.split(":")[1].strip()))
        elif line.startswith("Time (ms):"):
            times_ms.append(float(line.split(":")[1].strip()))

# Plot
plt.figure(figsize=(8,6))
plt.plot(sizes, times_ms, marker='o', linestyle='-')
plt.xscale('log')
plt.yscale('log')
plt.xlabel("Array Size (log scale)")
plt.ylabel("Time (ms) (log scale)")
plt.title("Merge Sort Benchmark")
plt.grid(True, which="both", ls="--")
plt.tight_layout()

# Save plot
plt.savefig("benchmark_plot.png")
plt.show()