#include <stdio.h>

#define COMPARE(A, B) (A > B) ? A : B

int main(int argc, char **argv, char **envp)
{

    printf("%d\n", COMPARE(1, 2)); // => 2 
    printf("%d\n", COMPARE(2, 3)); // => 3
    printf("%d\n", COMPARE(4, 4)); // => 4

    return 0;
}