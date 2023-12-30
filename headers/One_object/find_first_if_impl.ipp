#ifndef FIND_FIRST_IF_IMPL_HPP
#define FIND_FIRST_IF_IMPL_HPP

#include "find_first_if.hpp"

template <typename T, std::size_t COUNT, typename PredT>
const T* findFirstIf(const T (&arr)[COUNT], PredT predicate) {
    for (const T* i {arr}; i < arr + COUNT; ++i)
        if ((*predicate)(*i))
            return i;

    return nullptr;
}

#endif // !FIND_FIRST_IF_IMPL_HPP