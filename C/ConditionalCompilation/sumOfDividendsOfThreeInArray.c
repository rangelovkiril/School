#include <stdio.h>
#include <stdlib.h>

#define DEBUG
#define SIZE 10

int cmpfunc(const void *, const void *);

void sumofdividendsofthreeinarray(int *);

int main(int argc, char **argv, char **envp)
{
    // Generated with Random.org
    int arr[SIZE] = {-994, -876, -775, -597, -87, 58, 411, 623, 653, 967};

    sumofdividendsofthreeinarray(arr);

    return 0;
}

int cmpfunc(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void sumofdividendsofthreeinarray(int *arr)
{
    qsort(arr, SIZE, sizeof(int), cmpfunc);

    int sum = 0;
    for (int i = 0; i < SIZE; ++i)
    {
#ifdef DEBUG
        if (0 == arr[i] % 3)
        {
            sum += arr[i];
            printf("%d\n", arr[i]);
        }
#else
        if (0 == arr[i] % 3)
            sum += arr[i];
#endif
    }
    printf("Sum of dividends of three in this array is: %d", sum);
};