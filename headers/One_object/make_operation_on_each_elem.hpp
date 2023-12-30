#ifndef MAKE_OPERATION_ON_EACH_ELEM_HPP
#define MAKE_OPERATION_ON_EACH_ELEM_HPP

template <typename T, typename OperationT>
void makeOperationOnEachElem(T& elem, OperationT operation);

#include "make_operation_on_each_elem_impl.ipp";

#endif // !MAKE_OPERATION_ON_EACH_ELEM_HPP
