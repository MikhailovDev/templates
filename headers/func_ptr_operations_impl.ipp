#ifndef FUNC_PTR_OPERATIONS_IMPL_HPP
#define FUNC_PTR_OPERATIONS_IMPL_HPP

#include "func_ptr_operations.hpp"

template <typename T1, typename T2>
inline auto sum(T1 a, T2 b) -> decltype(a + b) {
    return a + b;
}

template <typename T1, typename T2>
inline auto sub(T1 a, T2 b) -> decltype(a - b) {
    return a - b;
}

template <typename T1, typename T2>
inline auto mult(T1 a, T2 b) -> decltype(a * b) {
    return a * b;
}

template <typename T1, typename T2>
inline auto div(T1 a, T2 b) -> decltype(a / b) {
    if (b == 0) {
        std::cout << "Math error : Attempted to divide by Zero" << std::endl;
        return -1;
    }
    return a / b;
}

template <typename T>
T getFactorial(T nmb) {
    if (nmb == 0) {
        return 1;
    }

    return nmb * getFactorial(nmb - 1);
}

template <typename T>
T getFibonacciNmb(T nmb) {
    std::cout << "count: " << ++c << std::endl;
    if (nmb == 0 || nmb == 1) {
        return 1;
    }

    return getFibonacciNmb(nmb - 1) + getFibonacciNmb(nmb - 2);
}

#endif // !FUNC_PTR_OPERATIONS_IMPL_HPP
