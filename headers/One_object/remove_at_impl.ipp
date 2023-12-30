#ifndef REMOVE_AT_IMPL_HPP
#define REMOVE_AT_IMPL_HPP

#include "remove_at.hpp"

template <typename T, std::size_t COUNT>
void removeAt(T (&arr)[COUNT], std::size_t index) {
    if (index < 0 || index >= COUNT)
        return;

    for (std::size_t i {index}; i < COUNT - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[COUNT - 1] = 0;
}

template <typename T>
void removeAt(T*& arr, std::size_t count, std::size_t index) {
    if (index < 0 || index >= count)
        return;

    T* nArr = new T[count - 1];
    std::size_t i {};
    for (; i < index; ++i) {
        nArr[i] = arr[i];
    }
    for (; i < count - 1; ++i) {
        nArr[i] = arr[i + 1];
    }

    delete[] arr;
    arr = nArr;
}

#endif // !REMOVE_AT_IMPL_HPP