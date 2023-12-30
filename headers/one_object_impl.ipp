#ifndef ONE_OBJECT_IMPL_HPP
#define ONE_OBJECT_IMPL_HPP

#include "one_object.hpp"

template <typename T, std::size_t COUNT>
inline void putAt(T (&arr)[COUNT], std::size_t index, T item) {
    if (index >= 0 && index < COUNT)
        arr[index] = item;
}

template <typename T>
inline void putAt(T* arr, std::size_t count, std::size_t index, T item) {
    if (index >= 0 && index < count)
        arr[index] = item;
}

template <typename T, std::size_t ROWS, std::size_t COLS>
inline void putAt(T (&mtrx)[ROWS][COLS], std::size_t row, std::size_t col,
                  T item) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS)
        mtrx[row][col] = item;
}

template <typename T>
inline void putAt(T** mtrx, std::size_t rows, std::size_t cols, std::size_t row,
                  std::size_t col, T item) {
    if (row >= 0 && row < rows && col >= 0 && col < cols)
        mtrx[row][col] = item;
}

#endif // !ONE_OBJECT_IMPL_HPP
