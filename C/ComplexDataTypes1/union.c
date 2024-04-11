#include <stdio.h>

#define SIZE 10

union Number {
  long odd;
  short even;
};

int main() 
{
  union Number numbers[SIZE];

  for (int i = 0; i < SIZE; ++i)
    i % 2 == 0 ? (numbers[i].even = i) : (numbers[i].odd = i);

  puts("Odd indexes:");
  for (int i = 1; i < SIZE; i += 2)
    printf("Index: %d, Value: %ld\n", i, numbers[i].odd);

  puts("Even indexes:");
  for (int i = 0; i < SIZE; i += 2)
    printf("Index: %d, Value: %d\n", i, numbers[i].even);

  return 0;
}
