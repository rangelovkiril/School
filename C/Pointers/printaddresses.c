#include <stdio.h>

int main(int argc, char ** argv)
{
  double a, b;

  printf("Enter first number:\n");
  scanf ("%lf", &a);
  printf("Enter second number:\n");
  scanf ("%lf", &b);

  printf("The address of first number is: %p \n and its value is: %lf \n", &a, a);

  printf("The address of first number is: %p \n and its value is: %lf \n", &b, b);

  return 0;
}