#include "sort.hpp"

#include <algorithm> // TODO: remove this when all algos are implemented.
#define ARR_LEN arr.size()

/**
 * @brief Bubble Sort.
 *
 * @param arr
 */
void bubble_sort(std::vector<uint16_t>& arr) {
    for(int i = 0; i < ARR_LEN -1; i++){
        for(int j = 0; j < ARR_LEN - i -1; j ++){
            if(arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
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
