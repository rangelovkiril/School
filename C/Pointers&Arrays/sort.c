#include <stdio.h>

#define SIZE 5

void swap(int *a, int *b) 
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void insertionSort(int * arr, size_t size) 
{
  int i, j, key;

  for (i = 1; i < size; ++i) {
    key = *(arr + i);
    j = i - 1;

    while (j >= 0 && *(arr + j) > key) {
      swap(arr + j + 1, arr + j);
      --j;
    }

    *(arr + j + 1) = key;
  }
}

int main(int argc, char** argv)
{
  int arr[SIZE] = {-2, -4, 3, 5, -10};

  for(int i = 0; i < SIZE; ++i)
    printf("%d ", arr[i]);
  putchar('\n');

  insertionSort(arr, SIZE);

  for(int i = 0; i < SIZE; ++i)
    printf("%d ", arr[i]);
  putchar('\n');

  return 0;
}