#include <stdio.h>

#define SIZE 10

void sort(int *);

int main(int argc, char **argv, char **envp)
{
    // Generated with Random.org
    int arr[SIZE] = {-9765, -9749, -9408, -8950, -8761, -8606, -8451, -8227, -8073, -7110};
    
    for(int i = 0; i < SIZE; ++i)
        printf("%d\n", arr[i]);
        
    sort(arr, sizeof(arr)/sizeof(arr[0]));
    
    for(int i = 0; i < SIZE; ++i)
        printf("%d\n", arr[i]);

    return 0;
}

void sort(int *arr, size_t lenght) {

#ifdef _WIN32
    int swapped;
    for (int i = 0; i < length - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
            break;
    }
#elif __linux__
    for (int i = 0; i < length - 1; i++)
    {

        int min_idx = i;
        for (int j = i + 1; j < length; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        if (min_idx != i)
        {
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }    
#elif __APPLE__
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
#else
    for(int i = 0; i < length / 2; i++){
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }
#endif
}
    


