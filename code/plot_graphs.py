import pandas as pd
import matplotlib.pyplot as plt
import os

# Read data from the CSV file
data = pd.read_csv("execution_times.csv")

# Plot the graphs
plt.figure(figsize=(10, 6))

# Plot observed execution times as a line graph
plt.plot(data["Dataset Size"], data["Execution Time (ms)"], label="Observed", color="blue", marker='o')

# Add labels and legend
plt.xlabel("Dataset Size")
plt.ylabel("Execution Time (ms)")
plt.title("Quicksort Algorithm Performance")
plt.legend()

# Specify the directory for saving the graph
save_directory = "C:\\Users\\Mario\\Documents\\GitHub\\COP3530_program\\graphs"

# Create the directory if it doesn't exist
os.makedirs(save_directory, exist_ok=True)

# Save the graph in the specified directory
plt.savefig(os.path.join(save_directory, "observed_execution_times_line.png"))

# Show the graph
plt.show()
