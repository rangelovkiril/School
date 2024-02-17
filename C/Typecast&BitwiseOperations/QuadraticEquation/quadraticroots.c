#include "quadraticroots.h"

QuadraticRootsResult findroots (f128 a, f128 b, f128 c){
    
    f128 determinant = (b * b) - (4 * a * c);

    QuadraticRootsResult result = (determinant < 0)
    ? (QuadraticRootsResult) \
    {.x1 = 0, .x2 = 0, \.norealroots = 1} 

    : (QuadraticRootsResult) \
    {.x1 = (-b - sqrtl(determinant))/(2 * a), \
    .x2 = (-b + sqrtl(determinant))/(2 * a), \
    .norealroots = 0};

    return result;
}