#ifndef SORTING_HH_
#define SORTING_HH_

#include <cstdint>
#include <functional>
#include <vector>


void bubble_sort(std::vector<uint16_t>& arr,
                 std::function<void(std::vector<uint16_t>, uint16_t, uint16_t)> show_array_func);

void selection_sort(std::vector<uint16_t>& arr);

void insertion_sort(std::vector<uint16_t>& arr);

void merge_sort(std::vector<uint16_t>& arr);

void quick_sort(std::vector<uint16_t>& arr);

void heap_sort(std::vector<uint16_t>& arr);

#endif
