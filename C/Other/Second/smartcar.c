#include <stdio.h>
#include <limits.h>

typedef unsigned char u8;

void printlights(u8 lights)
{
    printf("The lights on in the car are: ");

    for (int i = 0; i < CHAR_BIT; ++i)
        if ((lights >> i) & 1)
            printf("%d ", i + 1);

    putchar('\n');
}

void turnoffodds(u8 * lights)
{
    *lights &= 0x55; /* 0x55 -> 01010101 */
}

int main(int argc, char const **argv)
{
    u8 car = 237;

    printlights(car);

    turnoffodds(&car);

    printlights(car);

    return 0;
}
