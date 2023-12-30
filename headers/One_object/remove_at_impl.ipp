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

#endif // !REMOVE_AT_IMPL_HPP