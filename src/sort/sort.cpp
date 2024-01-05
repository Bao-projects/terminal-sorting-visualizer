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

        // If not swapping, the array is sorted.
        if(!swapped) {
            break;
        }
    }
}

// SELECTION SORT
void selection_sort(std::vector<uint16_t>& arr) {
    for (int i = 0; i < ARR_LEN; i++) {
        // Set current index as min.
        int min = i;

        for (int j = i + 1; j < ARR_LEN; j++) {
            // Interate through the rest of the array.
            // Update min index if smaller element found.
            if (arr[j] < arr[min]) {
                min = j; 
            }
        }

        // Swap the current element with the min index found.
        std::swap(arr[i], arr[min]);
    }
}

// INSERTION SORT
void insertion_sort(std::vector<uint16_t>& arr) {
    for (int i = 1; i < ARR_LEN; i++){
        // Key start at the second element.
        int key = arr[i];
        int j = i - 1;

        // While left element smaller than the key:
        // Push it to the left 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Swap the left element with the key since key smaller.
        arr[j + 1] = key;
    }
}

void merge_sort(std::vector<uint16_t>& arr) {

    // Base case:
    if (ARR_LEN <= 1 ) {
        return;
    }

    // Split the array into two halves.
    int mid = ARR_LEN / 2;
    std::vector<uint16_t> subleft(arr.begin(), arr.begin() + mid);
    std::vector<uint16_t> subright(arr.begin() + mid, arr.end());

    // Recursively sort the left and right subarrays.
    merge_sort(subleft);
    merge_sort(subright);

    // Merge the sorted subarrays back into the original array.
    int left = 0, right = 0, i = 0;

    while (left < subleft.size() && right < subright.size()) {
        if (subleft[left] < subright[right]) {
            arr[i++] = subleft[left++];
        } else {
            arr[i++] = subright[right++];
        }
    }

    // Add any remaining elements from the left subarray.
    while (left < subleft.size()) {
        arr[i++] = subleft[left++];
    }

    // Add any remaining elements from the right subarray.
    while (right < subright.size()) {
        arr[i++] = subright[right++];
    }
}

void quick_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}

void heap_sort(std::vector<uint16_t>& arr) {
    std::sort(arr.begin(), arr.end()); // TODO: remove this and actually implement the algo.
}
