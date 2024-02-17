#include <stdio.h>

#define SIZE 5

int main(int argc, char **argv, char **envp)
{

    int arr[SIZE];

    for (int i = 0; i < SIZE; ++i)
        scanf("%d", (arr + i));

    for (int i = 0; i < SIZE; ++i)
        printf("%d ", *(arr + i));

    return 0;
}