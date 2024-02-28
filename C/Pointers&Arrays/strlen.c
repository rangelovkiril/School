#include "stdio.h"

size_t strlen(const char *str) 
{
  size_t len = 0;

  for (int i = 0; *(str + i) != '\0'; ++i)
    ++len;

  return len;
}

int main(int argc, char **argv) 
{
  char name[] = "Ivan";
  printf("%s, %zu\n", name, strlen(name));

  return 0;
}