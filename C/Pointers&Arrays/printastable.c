#include "stdio.h"

#define COLS 4
#define ROWS 2

int countdigits(int);

int findwidest(int [][COLS], int);

void printastable(int [][COLS], int); 

int main(int argc, char **argv) {

  int arr[ROWS][COLS] = {{1000,2, 3, 4},{5, 6, 7, 8}};

  printastable(arr, ROWS);

  return 0;
}

int countdigits(int number) 
{
  int count;
  for (count = 0; number != 0; ++count, number /= 10);
  return (count) ? count : 1;
}

int findwidest(int arr[][COLS], int rows) 
{
  int widest = countdigits(arr[0][0]);

  for (int i = 0; i < rows; ++i)
    for (int j = 0; j < COLS; ++j)
      widest = widest > countdigits(arr[i][j]) ? widest : countdigits(arr[i][j]);

  return widest;
}

void printastable(int arr[][COLS], int rows) 
{
  int wide = findwidest(arr, rows) + 1;

  putchar('<');
  for(int i = wide * 4 + 3; i; --i) 
    putchar('=');
  puts(">");

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < COLS; j++)
      printf("|%*d", wide, arr[i][j]); 
  
    puts("|");
  }
  
  putchar('<');
  for(int i = wide * 4 + 3; i; --i) 
    putchar('=');
  puts(">");
}

