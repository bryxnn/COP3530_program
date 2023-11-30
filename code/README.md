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

The execution time is measured in milliseconds for each dataset size. The results are printed in the following format:

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

## How to Run

To compile and run the program, follow these steps:

1. Ensure you have a C++ compiler installed.
2. Clone this repository or download the `main.cpp` file.
3. Compile the program using your preferred C++ compiler.
4. Run the executable.

```bash
g++ main.cpp -o main
./main