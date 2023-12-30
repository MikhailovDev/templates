#ifndef QUICK_SORT_IMPL_HPP
#define QUICK_SORT_IMPL_HPP

#include "quick_sort.hpp"

template <typename T>
void swap(T& first, T& second) {
    T tmp = first;
    first = second;
    second = tmp;
}

#endif // !QUICK_SORT_IMPL_HPP
