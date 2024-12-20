#include <iostream>
#include <vector>
#include <string>

void insertionSort(std::vector<std::string>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        std::string key = arr[i];
        int j = i - 1;

        // Compare strings lexicographically (based on ASCII values)
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            --j;
        }
        arr[j + 1] = key; // Place the key at the correct position
    }
}

int main() {
    // Array of strings to sort
    std::vector<std::string> strings = {"banana", "apple", "grape", "cherry", "date"};

    // Sort using insertion sort
    insertionSort(strings);

    // Print the sorted strings
    std::cout << "Sorted strings:" << std::endl;
    for (const auto& str : strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
