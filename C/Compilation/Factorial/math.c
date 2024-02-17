#include "math.h"

long int factorial(int n)
{
    long int result = 1;

    for (int i = 1; i <= n; ++i)
        result *= i;
    
    return result;
}