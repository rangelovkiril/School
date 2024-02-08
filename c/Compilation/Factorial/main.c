#include <stdio.h>
#include "math.h"

int main(int argc, char **argv){
    
    long int n;

    printf("Enter number: ");
    scanf("%ld", &n);

    printf("Factorial of %ld is: %ld\n", n, factorial(n));

    return 0;
}