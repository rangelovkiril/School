#include "maths.h"

int main(int argc, char **argv)
{

    if (argc > 2)
    {
        float base = atof(argv[1]);
        int exponent = atoi(argv[2]);
        
        printf("%.2f on %d power is %.2f", base, exponent, powerof(base, exponent));
    }
    else
    {
        printf("No arguments givven.");
    }

    return 0;
}