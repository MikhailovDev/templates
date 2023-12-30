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

#endif // !ONE_OBJECT_IMPL_HPP
