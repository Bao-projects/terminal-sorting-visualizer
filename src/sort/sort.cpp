#include "sort.hpp"

#include <algorithm>

#define ARR_LEN arr.size()

// BUBBLE SORT
void bubble_sort(std::vector<uint16_t>& arr) {
    bool swapped;

    for (int i = 0; i < ARR_LEN -1; i++) {
        swapped = false;

        // Compare and swap elements if in wrong order.
        for (int j = 0; j < ARR_LEN - i -1; j ++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        //if now swapping, the array is sorted.
        if(!swapped) {
            break;
        }
    }
}

// SELECTION SORT
void selection_sort(std::vector<uint16_t>& arr) {
    for (int i = 0; i < ARR_LEN; i++) {
        // set current index as min
        int min = i;

        for (int j = i + 1; j < ARR_LEN; j++) {
            // interate through the rest of the array
            // update min index if smaller element found
            if (arr[j] < arr[min]) {
                min = j; 
            }
        }

        // swap the current element with the min index found
        std::swap(arr[i], arr[min]);
    }
}

// INSERTION SORT
void insertion_sort(std::vector<uint16_t>& arr) {
    for (int i = 1; i < ARR_LEN; i++){
        // key start at the second element
        int key = arr[i];
        int j = i - 1;

        // while left element smaller than the key:
        // push it to the left 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // swap the left element with the key since key smaller.
        arr[j + 1] = key;
    }
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
