#include <stdio.h>

int compareasc(const void * const a, const void * const b){
    return (*(int *)a < *(int *)b) ? 1 : (*(int *)a > *(int *)b) ? -1 : 0;
}

int comparedes(const void * const a, const void * const b){
    return (*(int *)a > *(int *)b) ? 1 : (*(int *)a < *(int *)b) ? -1 : 0;
}

int main() 
{
    const int a = 3; 
    const int b = 4;

    const void * const pA = &a;
    const void * const pB = &b;

    printf("First function: %d\n", compareasc(pA, pB));
    printf("Second function: %d\n", comparedes(pA, pB));

    return 0;
}