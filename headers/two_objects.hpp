#ifndef TWO_OBJECTS_HPP
#define TWO_OBJECTS_HPP

#include "func_ptr_operations.hpp"

template <typename T1, typename T2, typename Func>
auto getObjSplittedByOneWay(T1 first, T2 second, Func way) {
    return (*way)(first, second);
}

#endif // !TWO_OBJECTS_HPP
