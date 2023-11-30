import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

# Read the data from the CSV file
data = pd.read_csv("execution_times.csv")

# Extract dataset size and execution time
dataset_sizes = data["Dataset Size"]
execution_times = data["Execution Time (ms)"]

# Theoretical time complexities for Quicksort
average_case_complexity = dataset_sizes * np.log2(dataset_sizes)  # Average-case time complexity of Quicksort
worst_case_complexity = dataset_sizes**2  # Worst-case time complexity of Quicksort

# Plotting
fig, ax1 = plt.subplots()

# Observed Execution Times
color = 'green'  # Matched to the legend color
ax1.set_xlabel('Dataset Size')
ax1.set_ylabel('Execution Time (ms)', color=color)
ax1.plot(dataset_sizes, execution_times, marker='o', linestyle='-', color=color, label="Observed Execution Times")
ax1.tick_params(axis='y', labelcolor=color)
ax1.tick_params(axis='x', rotation=45)  # Rotate x-axis labels for better readability

# Set y-axis tick locations for the left y-axis (execution time)
ax1.set_yticks(np.linspace(0, max(execution_times), 6, endpoint=True))

# Average Case Complexity
ax2 = ax1.twinx()
color = 'blue'  # Matched to the legend color
ax2.set_ylabel('Average Case Complexity', color=color)
ax2.plot(dataset_sizes, average_case_complexity, marker='o', linestyle='-', color=color, label="Average Case Complexity")
ax2.tick_params(axis='y', labelcolor=color)
ax2.yaxis.label.set_color(color)  # Set y-axis label color explicitly

# Worst Case Complexity
ax3 = ax1.twinx()
ax3.spines['right'].set_position(('outward', 60))
color = 'red'  # Matched to the legend color
ax3.set_ylabel('Worst Case Complexity', color=color)
ax3.plot(dataset_sizes, worst_case_complexity, marker='o', linestyle='-', color=color, label="Worst Case Complexity")
ax3.tick_params(axis='y', labelcolor=color)
ax3.yaxis.label.set_color(color)  # Set y-axis label color explicitly

# Combine legends from all axes
lines, labels = ax1.get_legend_handles_labels()
lines2, labels2 = ax2.get_legend_handles_labels()
lines3, labels3 = ax3.get_legend_handles_labels()
ax3.legend(lines + lines2 + lines3, labels + labels2 + labels3, loc='upper left')

# Customize the plot
plt.title("Quicksort Algorithm Performance")
fig.tight_layout()

# Save the plot
save_directory = r"C:\Users\Mario\Documents\GitHub\COP3530_program\graphs"
plt.savefig(save_directory + "\\performance_comparison.png")

# Show the plot (optional)
plt.show()
