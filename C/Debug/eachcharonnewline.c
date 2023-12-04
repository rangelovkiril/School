#include <stdio.h>

void printcharsonnewline(char *s);

int main()
{
  char input[] = "someString";
  printcharsonnewline(input);

  return 0;
}

void printcharsonnewline(char *s)
{
  /*
  1. Char cannot be used as iterator for loop.
  2. '0' isn't terminator, so if there's any actual '0' in given string input will stop after it.
  */
  for (int index = 0; s[index] != '\0'; index++)
  {
    char currentchar = s[index];
    printf("%c\n", currentchar);
  }
}