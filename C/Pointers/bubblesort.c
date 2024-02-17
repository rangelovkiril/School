#include <stdio.h>

#define SIZE 10

//Declarations 
int compareinc(const void *, const void *);

int comparedec(const void *, const void *);

void swapelements(void *, void *); 

void printarray(int *, size_t);

void bubbleSort(int *, size_t, int (*)(const void *, const void *), void (*)(void *, void *)); 
// End

int main(int argc, char **argv) {
  int arr1[SIZE] = {-34, 19, 46, -1, 24, 96, 99, -35, 39, -43};
  int arr2[SIZE] = {15, 45, -74, 54, -19, 73, -44, 3, 60, -42};

  printarray(arr1, SIZE);
  printarray(arr2, SIZE);

  // Sorting arr1 in increasing order and arr2 in decreasing
  bubbleSort(arr1, SIZE, compareinc, swapelements);
  bubbleSort(arr2, SIZE, comparedec, swapelements);

  // Print sorted
  printarray(arr1, SIZE);
  printarray(arr2, SIZE);

  return 0;
}

int compareinc(const void *a, const void *b) { return *((int *)a) > *((int *)b); }

int comparedec(const void *a, const void *b) { return *((int *)a) < *((int *)b); }

void swapelements(void *a, void *b) 
{
  int temp = *((int *)a);

  *((int *)a) = *((int *)b);
  *((int *)b) = temp;
}

void bubbleSort(int *arr, size_t size,
                int (*compare)(const void *, const void *),
                void (*swapelements)(void *, void *)) 
{
  int swapped;

  for (int i = 0; i < size - 1; i++) {
    swapped = 0;
    for (int j = 0; j < size - i - 1; j++) {
      if (compare(arr + j, arr + j + 1)) {
        swapelements(arr + j, arr + j + 1);
        swapped = 1;
      }
    }
    if (!swapped)
      break;
  }
}

void printarray(int * arr, size_t size)
{
  for(int i = 0; i < size; ++i)
    printf("%d ", arr[i]);
  putchar('\n');
}
