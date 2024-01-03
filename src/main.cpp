#include <algorithm>
#include <iostream>
#include <random>
#include <unistd.h>

#include "sort/sort.hpp"

#define GREEN   "\033[32m"
#define RED     "\033[31m"
#define RESET   "\033[0m"

std::vector<uint16_t> generate_array() {
    uint16_t SIZE = 20;

    std::vector<uint16_t> arr(SIZE, 0);
    for (uint16_t i = 0; i < SIZE; i++) {
        arr[i] = i + 1;
    }
    std::shuffle(arr.begin(), arr.end(), std::random_device());
    return arr;
}

void show_array(std::vector<uint16_t> arr,
                uint16_t green_bar_idx,
                uint16_t red_bar_idx) {
    system("clear");

    for (uint16_t i = 0; i < arr.size(); i++) {
        uint16_t barlen = arr[i];

        if (i == green_bar_idx) {
            std::cout << GREEN;
        } else if (i == red_bar_idx) {
            std::cout << RED;
        }
        for (uint16_t j = 0; j < barlen; j++) {
            std::cout << "=";
        }
        std::cout << RESET;
        std::cout << std::endl;
    }
    usleep(100000);
}

int main() {
    std::cout << "STARTED" << std::endl;
    std::vector<uint16_t> arr = generate_array();
    bubble_sort(arr, &show_array);
    return 0;
}
