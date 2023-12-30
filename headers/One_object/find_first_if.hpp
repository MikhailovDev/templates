#ifndef FIND_FIRST_IF_HPP
#define FIND_FIRST_IF_HPP

#include <cstddef>

template <typename T, std::size_t COUNT, typename PredT>
const T* findFirstIf(const T (&arr)[COUNT], PredT predicate);

template <typename T, typename PredT>
const T* findFirstIf(const T* arr, std::size_t count, PredT predicate);

#include"find_first_if_impl.ipp"

#endif // !FIND_FIRST_IF_HPP
