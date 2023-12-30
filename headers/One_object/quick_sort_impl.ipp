#ifndef QUICK_SORT_IMPL_HPP
#define QUICK_SORT_IMPL_HPP

#include "quick_sort.hpp"

template <typename T>
void quickSort(T* arr, int low, int high) {
    if (low < high) {
        int pivot = getPivot(arr, low, high);

        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

template <typename T>
int getPivot(T* arr, int low, int high) {
    int pivot = arr[low], i = high + 1;

    for (int j = high; j > low; --j) {
        if (arr[j] > pivot) {
            swap(arr[--i], arr[j]);
        }
    }

    swap(arr[low], arr[--i]);
    return i;
}

template <typename T>
void swap(T& first, T& second) {
    T tmp = first;
    first = second;
    second = tmp;
}

#endif // !QUICK_SORT_IMPL_HPP
