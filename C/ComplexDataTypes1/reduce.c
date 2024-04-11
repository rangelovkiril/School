#include <stdio.h>

typedef unsigned long long ull;

ull add(ull a, ull b) { return a + b; }

typedef ull (*callback)(ull, ull);

ull reduce(ull arr[], ull size, callback func, ull initial) 
{
  ull result = initial;

  for (ull i = 0; i < size; i++) 
    result = func(result, arr[i]);

  return result;
}

int main() 
{
  ull arr[]  = {1, 2, 3};
  ull size   = sizeof(arr) / sizeof(arr[0]);
  ull result = reduce(arr, size, add, 0);

  printf("reduce(arr, %llu, add, 0) = %llu\n", size, result);

  return 0;
}
