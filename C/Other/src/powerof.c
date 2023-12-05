#include "maths.h"

int main(int argc, char **argv)
{

    if (argc > 2)
    {
        float exponent = atof(argv[1]);
        int base = atoi(argv[2]);
        
        printf("%.2f on %d power is %.2f", exponent, base, powerof(base, exponent));
    }
    else
    {
        printf("No arguments givven.");
    }

    return 0;
}