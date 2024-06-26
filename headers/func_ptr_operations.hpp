#ifndef FUNC_PTR_OPERATIONS_HPP
#define FUNC_PTR_OPERATIONS_HPP

template <typename T1, typename T2>
auto sum(T1 a, T2 b) -> decltype(a + b);

template <typename T1, typename T2>
auto sub(T1 a, T2 b) -> decltype(a - b);

template <typename T1, typename T2>
auto mult(T1 a, T2 b) -> decltype(a * b);

template <typename T1, typename T2>
auto div(T1 a, T2 b) -> decltype(a / b);

template <typename T>
T getFactorial(T nmb);

template <typename T>
T getFibonacciNmb(T nmb);

#include "func_ptr_operations_impl.ipp"

#endif // !FUNC_PTR_OPERATIONS_HPP
