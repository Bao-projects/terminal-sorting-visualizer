#include "sort.hpp"

#include <algorithm> // TODO: remove this when all algos are implemented.
#define ARR_LEN arr.size()

// BUBBLE SORT
void bubble_sort(std::vector<uint16_t>& arr) {
    for(int i = 0; i < ARR_LEN -1; i++){
        for(int j = 0; j < ARR_LEN - i -1; j ++){
            if(arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// SELECTION SORT
void selection_sort(std::vector<uint16_t>& arr) {
    for(int i = 0; i < ARR_LEN; i++){
        int min = i;
        for(int j = i + 1; j < ARR_LEN; j++){
            if(arr[j] < arr[min]){
                min = j; 
            }
        }
        std::swap(arr[i], arr[min]);
    }
}

// INSERTION SORT
void insertion_sort(std::vector<uint16_t>& arr) {
    for(int i = 1; i < ARR_LEN; i++){
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
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
