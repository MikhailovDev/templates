#ifndef REMOVE_AT_HPP
#define REMOVE_AT_HPP

#include <cstddef>

template <typename T, std::size_t COUNT>
void removeAt(T (&arr)[COUNT], std::size_t index);

#include "remove_at_impl.ipp"

#endif // !REMOVE_AT_HPP
