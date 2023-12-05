#include "maths.h"

int main(int argc, char **argv)
{

    if (argc > 1)
    {
        int arg = atoi(argv[1]);
        printf("%d ", SQUIRE(arg));
    }
    else
    {
        printf("No arguments givven.");
    }

    return 0;
}