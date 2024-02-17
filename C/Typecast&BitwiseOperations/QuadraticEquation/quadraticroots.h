#ifndef QUADRATICROOTS_H
#define QUADRATICROOTS_H

#include <math.h>

typedef long double f128;

typedef struct 
{
    f128 x1;
    f128 x2;
    char norealroots;
} QuadraticRootsResult;

QuadraticRootsResult findroots(f128, f128, f128);

#endif /*QUADRATICROOTS_H*/