#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;
using namespace chrono;

// Quicksort function
template <typename T>
void quicksort(vector<T>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

// Partition function for quicksort
template <typename T>
int partition(vector<T>& arr, int low, int high) {
    T pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Function to generate a random dataset of given size
vector<int> generateRandomDataset(int size) {
    vector<int> data;
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    for (int i = 0; i < size; ++i) {
        data.push_back(rand() % 100); // Adjust the range as needed
    }

    return data;
}

int main() {
    // Example usage with execution time measurement

    vector<int> data;
    int datasetSizes[] = {10, 100, 1000, 10000};

    for (int size : datasetSizes) {
        // Generate random dataset
        data = generateRandomDataset(size);

        // Measure execution time
        auto start = high_resolution_clock::now();
        
        // Sort the dataset using quicksort
        quicksort(data, 0, data.size() - 1);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);

        cout << "Dataset size: " << size << " | Execution Time: " << duration.count() << " microseconds" << endl;

        // Theoretical time complexity analysis
        // For simplicity, let's consider the average case time complexity
        int theoreticalTime = size * log2(size); // Adjust as needed based on your analysis

        cout << "Theoretical Time Complexity: " << theoreticalTime << " (in arbitrary units)" << endl;

        // Comparison with theoretical result
        cout << "Comparison with Theoretical Result: ";
        if (duration.count() > theoreticalTime) {
            cout << "Actual time is higher than theoretical time. The algorithm may have some inefficiencies." << endl;
        } else {
            cout << "Actual time is consistent with theoretical expectations." << endl;
        }

        cout << "----------------------------------------------" << endl;
    }

    return 0;
}
