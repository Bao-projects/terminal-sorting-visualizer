#include "sort.hpp"

#include <algorithm> // TODO: remove this when all algos are implemented.


void swap(std::vector<uint16_t>& arr, int idx1, int idx2)
{
    uint16_t temp = arr[idx1];
    arr[idx1] = arr[idx2];
    arr[idx2] = temp;
}

void bubble_sort(std::vector<uint16_t>& arr,
                 std::function<void(std::vector<uint16_t>, uint16_t, uint16_t)> show_array_func) {
    uint16_t size = arr.size();

    for (uint16_t i = 0; i < size; i++) {
        for (uint16_t j = 0; j < size - i - 1; j++) {
            show_array_func(arr, j, j + 1);
            if (arr[j] > arr[j + 1]) {
                swap(arr, j, j + 1);
            }
        }
    }
}

void selection_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}

void insertion_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}

void merge_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}

void quick_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}

void heap_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}
