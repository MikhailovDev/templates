#ifndef MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP
#define MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP

#include "make_operation_on_each_elem.hpp"

template <typename T, typename OperationT>
void makeOperationOnEachElem(T& elem, OperationT operation) {
    elem = (*operation)(elem);
}

template <typename T, std::size_t COUNT, typename OperationT>
void makeOperationOnEachElem(T (&elem)[COUNT], OperationT operation) {
    for (std::size_t i {}; i < COUNT; ++i) {
        elem[i] = (*operation)(elem[i]);
    }
}

#endif // !MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP