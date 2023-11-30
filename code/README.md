# Bryan Mena Algorithm Assignment
 
# Quicksort Algorithm

This C++ program implements the Quicksort algorithm and measures its execution time on randomly generated datasets of various sizes. Additionally, there is a Python script included for visualizing the observed execution times.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Dataset Sizes](#dataset-sizes)
- [Execution Time](#execution-time)
- [How to Run C++ Program](#how-to-run-c-program)
- [Graph Plotting with Python](#graph-plotting-with-python)
- [How to Run the Python Script](#how-to-run-the-python-script)

## Introduction

The Quicksort algorithm is a widely used sorting algorithm known for its efficiency. This program demonstrates the algorithm's performance on datasets of different sizes and includes a Python script for visualizing the observed execution times.

## Usage

The C++ program generates random datasets, applies the Quicksort algorithm, and measures the execution time for each dataset size. The results are then printed to the console and saved in a CSV file (`execution_times.csv`).

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

The execution time is measured in milliseconds for each dataset size. The results are saved in a CSV file with the following format:

Execution Time (ms)
0
0
0
6
9
83
64
237
860
1739

## Final Output

An example of how the final output will be in the following format:

Dataset Size    Execution Time (ms)     Is it sorted?
10              0                       Yes
100             0                       Yes
1000            0                       Yes
5000            6                       Yes
10000           9                       Yes
50000           83                      Yes
100000          64                      Yes
250000          237                     Yes
500000          860                     Yes
750000          1739                    Yes

- **Dataset Size:** The size of the randomly generated dataset.
- **Execution Time (ms):** The time taken by the Quicksort algorithm to sort the dataset in milliseconds.
- **Is it sorted?** Indicates whether the resulting array is sorted (`Yes`) or not (`No`).

## How to Run C++ Program

To compile and run the C++ program, follow these steps:

1. Ensure you have a C++ compiler installed.
2. Clone this repository or download the `main.cpp` file.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

``bash
g++ main.cpp -o main
./main

## Graph Plotting with Python

The Python script plot_graphs.py is included to visualize the observed execution times. The script uses the pandas and matplotlib libraries. Make sure to install them using the following commands:

pip install pandas
pip install matplotlib

## How to Run the Python Script

Navigate to the code directory and run the Python script:

cd code
python plot_graphs.py

The script generates a line graph of observed execution times and saves it as `observed_execution_times_line.png` in the graphs directory. You can customize the directory by modifying the save_directory variable in the script.
