#ifndef QUICK_SORT_HPP
#define QUICK_SORT_HPP

template <typename T>
int getPivot(T* arr, int low, int high);

template <typename T>
void swap(T& first, T& second);

#include "quick_sort_impl.ipp"

#endif // !QUICK_SORT_HPP
