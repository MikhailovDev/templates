#include "two_objects.hpp"
#ifndef TWO_OBJECTS_IMPL_HPP
#define TWO_OBJECTS_IMPL_HPP

template <typename Dest, typename T1, typename T2, typename Func>
inline void setObjSplittedByOneWay(Dest& dest, T1 first, T2 second, Func way) {
    dest = (*way)(first, second);
}

template <typename Dest, std::size_t DEST_COUNT, typename T1,
          std::size_t COUNT1, typename T2, std::size_t COUNT2, typename Func>
void setObjSplittedByOneWay(Dest (&dest)[DEST_COUNT],
                                   const T1 (&first)[COUNT1],
                                   const T2 (&second)[COUNT2], Func way) {
    typedef decltype(*first + *second) bType;

    std::size_t max, min;
    if (COUNT1 > COUNT2) {
        max = COUNT1;
        min = COUNT2;
        std::copy(first, first + COUNT1, dest);
    } else {
        max = COUNT2;
        min = COUNT1;
        std::copy(second, second + COUNT2, dest);
    }

    std::size_t i;
    for (i = 0; i < min; ++i) {
        dest[i] = (*way)(first[i], second[i]);
    }
}

template <typename Dest, std::size_t DEST_COUNT, typename T1,
          std::size_t COUNT1, typename T2, std::size_t COUNT2, typename Func>
void setObjSplittedByOneWay(Dest (&dest)[DEST_COUNT], const T1 (&first)[COUNT1],
                            const T2 (&second)[COUNT2], Func way) {
    typedef decltype(*first + *second) bType;

    std::size_t max, min;
    if (COUNT1 > COUNT2) {
        max = COUNT1;
        min = COUNT2;
        std::copy(first, first + COUNT1, dest);
    } else {
        max = COUNT2;
        min = COUNT1;
        std::copy(second, second + COUNT2, dest);
    }

    std::size_t i;
    for (i = 0; i < min; ++i) {
        dest[i] = (*way)(first[i], second[i]);
    }
}

#endif // !TWO_OBJECTS_IMPL_HPP
