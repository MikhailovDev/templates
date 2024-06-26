#ifndef PUT_AT_HPP
#define PUT_AT_HPP

#include <cstddef>

template <typename T, std::size_t COUNT>
void putAt(T (&arr)[COUNT], std::size_t index, T item);

template <typename T>
void putAt(T* arr, std::size_t count, std::size_t index, T item);

template <typename T, std::size_t ROWS, std::size_t COLS>
void putAt(T (&mtrx)[ROWS][COLS], std::size_t row, std::size_t col, T item);

template <typename T>
void putAt(T** mtrx, std::size_t rows, std::size_t cols, std::size_t row,
           std::size_t col, T item);

#include "put_at_impl.ipp"

#endif // !PUT_AT_HPP