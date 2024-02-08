#include "../headers/util.h"

void printerror()
{

    if (underflow)
        fprintf(stderr, "Underflow error: number given is too small\n");

    if (overflow)
        fprintf(stderr, "Overflow error: number given is too big\n");
}
