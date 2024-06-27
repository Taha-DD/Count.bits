#include <stdio.h>
#include <stddef.h>

size_t countBits(unsigned value)
{
    size_t counter = 0;

    if (value % 2)
        counter++;

    if (value < 2)
        return counter;

    value /= 2;

    return counter + countBits(value);
}

int main()
{
    printf("%zu", countBits(7));
    return 0;
}
