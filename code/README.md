# BryxnM Algorithm Assignment
 
# Quicksort Algorithm Performance Analysis

This C++ program implements the Quicksort algorithm and measures its execution time on randomly generated datasets of various sizes. The analysis includes theoretical time complexities and a Python script to visualize the algorithm's performance.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Dataset Sizes](#dataset-sizes)
- [Execution Time](#execution-time)
- [Theoretical Time Complexity](#theoretical-time-complexity)
- [How to Run The C++ Program](#how-to-run-the-c-program)
- [Graph Plotting with Python](#graph-plotting-with-python)
- [How to Run the Python Script](#how-to-run-the-python-script)

## Introduction

The Quicksort algorithm is a widely used sorting algorithm known for its efficiency. This program demonstrates the algorithm's performance on datasets of different sizes and includes an analysis of theoretical time complexities.

## Usage

The main C++ program generates random datasets, applies the Quicksort algorithm, and measures the execution time for each dataset size. The results are then saved to a CSV file for further analysis.

## Dataset Sizes

The program uses the following dataset sizes for analysis:

- 10
- 100
- 1000
- 5000
- 10000
- 50000
- 100000
- 250000
- 500000
- 750000

## Execution Time

The execution time is measured in milliseconds for each dataset size. The results are saved in the `execution_times.csv` file.

## Theoretical Time Complexity

The Python script `plot_graphs.py` analyzes and compares the theoretical average and worst-case time complexities of the Quicksort algorithm with the actual execution times. The complexities are based on the class material:

- **Average Case Complexity:** \(O(n \log n)\)
- **Worst Case Complexity:** \(O(n^2)\)

## How to Run The C++ Program

To compile and run the C++ program, follow these steps:

1. Ensure you have a C++ compiler installed.
2. Clone this repository or download the `main.cpp` file.
3. Open a terminal or command prompt and navigate to the directory containing `main.cpp`.
4. Compile the program using your preferred C++ compiler.
5. Run the executable.

``bash
g++ main.cpp -o main
./main

## Graph Plotting with Python

The Python script `plot_graphs.py` is included to visualize the observed execution times. The script uses the pandas and matplotlib libraries. Make sure to install them using the following commands:

pip install pandas
pip install matplotlib

## How to Run the Python Script

Navigate to the code directory and run the Python script:

cd code
python plot_graphs.py

The Python script then generates a comparison graph that shows the theoretical average-case and worst-case time complexities as lines, along with the observed execution times. The graph is saved as `performance_comparison.png` in the `graphs` directory. You can customize the directory by modifying the save_directory variable in the script.
