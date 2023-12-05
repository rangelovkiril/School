#include "maths.h"

float powerof(float base, int exponent)
{
    float result = 1;
    
    for (int i = 0; i < exponent; ++i)
        result *= base;

    return result;
    
}