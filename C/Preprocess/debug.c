#include <stdio.h>

#define DEBUG(A) printf("%s on line %d: %s = %d.\n", __FILE__, __LINE__, #A, A)

void dosmth(int *); // An example function

int main(int argc, char **argv, char **envp)
{

    int somename = 7;

    DEBUG(somename);

    dosmth(&somename);

    DEBUG(somename);

    return 0;
}

void dosmth(int *n)
{
    while (*n < 10)
    {
        *n += 2;
        DEBUG(*n);
    }
}