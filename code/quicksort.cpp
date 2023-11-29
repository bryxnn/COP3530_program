#include <iostream>
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

int main() {
    // Dataset sizes
    std::vector<int> datasetSizes = {1000, 5000, 10000, 15000, 20000};

    std::cout << "Dataset Size\tExecution Time (ms)\n";

    for (int size : datasetSizes) {
        // Generating random dataset of current size
        std::vector<int> data = generateRandomData(size);

        // Measuring execution time
        clock_t start = clock();
        quicksort(data, 0, size - 1);
        clock_t end = clock();

        // Calculating execution time in milliseconds
        double executionTime = (double)(end - start) / CLOCKS_PER_SEC * 1000;

        std::cout << size << "\t\t" << executionTime << std::endl;
    }

    return 0;
}