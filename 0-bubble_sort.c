#include "sort.h"
#include "stdbool.h"

/**
 * bubble_sort - Bubble sort Algorithm
 * @array: array to be sorted
 * @size: size of array
 */

void bubble_sort(int *array, size_t size) {
    bool swapped;
    int temp;
    for (size_t i = 0; i < size - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
                print_array(array, size);
            }
        }
        if (!swapped) {
            break;
        }
    }
}
