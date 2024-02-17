#include <stdio.h>

#define ARRAY_SIZE 3

#if ARRAY_SIZE > 0 && ARRAY_SIZE < 10

    int arr[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        int temp = 1;
        for (int j = 1; j <= i; ++j)
            temp *= 2;

        arr[i] = temp;
    }  
    
    for (int i = 0; i < ARRAY_SIZE; ++i)
    {
        printf("%d\n", arr[i]);
    }

#else

    printf("Invalid array size");

#endif


int main(int argc, char **argv, char **envp)
{

    return 0;
    
}
