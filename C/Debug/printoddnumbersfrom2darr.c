#include <stdio.h>

int main()
{

    int arr[2][3] = {{1, 7, 6}, {5, 2, 3}};
    /*
    Iteration 'i < 3; j < 2' will go through [3][2] array.
    */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] % 2 == 1)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }

    return 0;
}