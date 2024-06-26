#ifndef TWO_OBJECTS_HPP
#define TWO_OBJECTS_HPP

#include "func_ptr_operations.hpp"
#include <cstddef>

template <typename Dest, typename T1, typename T2, typename Func>
void setObjSplittedByOneWay(Dest& dest, T1 first, T2 second, Func way);

template <typename Dest, std::size_t DEST_COUNT, typename T1,
          std::size_t COUNT1, typename T2, std::size_t COUNT2, typename Func>
void setObjSplittedByOneWay(Dest (&dest)[DEST_COUNT], const T1 (&first)[COUNT1],
                            const T2 (&second)[COUNT2], Func way);

template <std::size_t DEST_COUNT, std::size_t STR_COUNT, typename Func>
void setObjSplittedByOneWay(char (&dest)[DEST_COUNT],
                            const char* (&strings)[STR_COUNT],
                            Func way);

#include "two_objects_impl.ipp"

#endif // !TWO_OBJECTS_HPP
