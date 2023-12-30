#ifndef MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP
#define MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP

#include "make_operation_on_each_elem.hpp"

template <typename T, typename OperationT>
void makeOperationOnEachElem(T& elem, OperationT operation) {
    elem = (*operation)(elem);
}

#endif // !MAKE_OPERATION_ON_EACH_ELEM_IMPL_IPP