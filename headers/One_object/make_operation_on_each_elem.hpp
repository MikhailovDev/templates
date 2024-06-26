#ifndef MAKE_OPERATION_ON_EACH_ELEM_HPP
#define MAKE_OPERATION_ON_EACH_ELEM_HPP

template <typename T, typename OperationT>
void makeOperationOnEachElem(T& elem, OperationT operation);

template <typename T, std::size_t COUNT, typename OperationT>
void makeOperationOnEachElem(T (&arr)[COUNT], OperationT operation);

template <typename T, typename OperationT>
void makeOperationOnEachElem(T* arr, std::size_t count, OperationT operation);

#include "make_operation_on_each_elem_impl.ipp";

#endif // !MAKE_OPERATION_ON_EACH_ELEM_HPP
