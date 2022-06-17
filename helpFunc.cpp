#include "helpFunc.hpp"

#include <cstddef>

char detail::getLetter(const int count)
{
    char letter = 0;
    for (std::size_t i = 0; i < count; i++)
    {
        letter++;
    }
    return letter;
}