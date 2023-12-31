#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Quicksort Algorithm
template<typename T>
int partition(std::vector<T> &arr, int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }

    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

template<typename T>
void quicksort(std::vector<T> &arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

// Function to generate random dataset
std::vector<int> generateRandomData(int size) {
    std::vector<int> data;
    srand(static_cast<unsigned int>(time(nullptr)));

    for (int i = 0; i < size; i++) {
        data.push_back(rand() % 1000); // Generating random integers between 0 and 999
    }

    return data;
}

// Function to check if the array is sorted
template<typename T>
bool isSorted(const std::vector<T>& arr) {
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    // Dataset sizes
    std::vector<int> datasetSizes = {10, 100, 1000, 5000, 10000, 50000, 100000, 250000, 500000, 750000};

    // Open a CSV file for writing
    std::ofstream outputFile("execution_times.csv");
    outputFile << "Dataset Size,Execution Time (ms),Is it sorted?\n";

    for (int size : datasetSizes) {
        // Generating random dataset of current size
        std::vector<int> data = generateRandomData(size);

        // Measuring execution time
        clock_t start = clock();
        quicksort(data, 0, size - 1);
        clock_t end = clock();

        // Calculating execution time in milliseconds
        double executionTime = (double)(end - start) / CLOCKS_PER_SEC * 1000;

        // Checking if the array is sorted
        bool sorted = isSorted(data);

        // Write data to the CSV file
        outputFile << size << "," << executionTime << "," << (sorted ? "Yes" : "No") << "\n";
    }

    // Close the file
    outputFile.close();

    std::cout << "Data file was made. Please view execution_times.csv for the data values.";

    return 0;
}
