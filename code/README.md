# Bryan Mena Algorithm Assignment
 
# Quicksort Algorithm

This C++ program implements the Quicksort algorithm and measures its execution time on randomly generated datasets of various sizes.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Dataset Sizes](#dataset-sizes)
- [Execution Time](#execution-time)
- [Final Output](#final-output)
- [How to Run](#how-to-run)

## Introduction

The Quicksort algorithm is a widely used sorting algorithm known for its efficiency. This program demonstrates the algorithm's performance on datasets of different sizes.

## Usage

The main program generates random datasets, applies the Quicksort algorithm, and measures the execution time for each dataset size. The results are then printed to the console.

## Dataset Sizes

The program uses the following dataset sizes for analysis:

- 1000
- 5000
- 10000
- 15000
- 20000

## Execution Time

The execution time is measured in milliseconds for each dataset size. The results are printed in the following format:

Execution Time (ms)
0
1
1
3
3 

## Final Output

The final output will be in the following format:

Dataset Size    Execution Time (ms)     Is it sorted?
1000            0                       Yes
5000            1                       Yes
10000           1                       Yes
15000           3                       Yes
20000           3                       Yes

- **Dataset Size:** The size of the randomly generated dataset.
- **Execution Time (ms):** The time taken by the Quicksort algorithm to sort the dataset in milliseconds.
- **Is it sorted?** Indicates whether the resulting array is sorted (`Yes`) or not (`No`).

## How to Run

To compile and run the program, follow these steps:

1. Ensure you have a C++ compiler installed.
2. Clone this repository or download the `main.cpp` file.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

```bash
g++ main.cpp -o main
./main
