#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFF_SIZE 255
#define MAX_TOKEN_LENGTH 15
#define MAX_TOKENS 31

void addgrade(int **grades, int grade);

void rmgrade(int **grades);

float getavg(int **grades);

void handle(int **, char *);

int main(int argc, char **argv) {
  char buff[BUFF_SIZE];

  int *grades = (int *)calloc(1, sizeof(int));
  grades[0] = 0; 

  /*
    Because initialization of memory with size 0 is imposible, array always will have additional element on index 0.
    To optimize memory and code quality I decided to put count into this element.
  */

  puts("\
  This is simple program to manipulate with student's grades. \
  addgrade <grade>  Add new grade \n \
  rmgrade           Remove latest grade \n \
  getavg            Get average grade \n \
  exit              Exit the program \n \
  ");



  for (;;) {
    if (fgets(buff, sizeof(buff), stdin) == NULL) {
      puts("Unexpected error occurred. Exiting...");
      break;
    }

    handle(&grades, buff);
  }

  return 0;
}

//TODO: handle function has more than one responsibilities 

void handle(int **grades, char *input) 
{  
  char tokens[MAX_TOKENS][MAX_TOKEN_LENGTH];
  int  tokencount = 0;

  char *token = strtok(input, " \t\n");

  while (token && tokencount < MAX_TOKENS) {
    strcpy(tokens[tokencount], token);
    tokencount++;
    token = strtok(NULL, " \t\n");
  }

  for (int i = 0; i < tokencount; i++) {
    if (strcmp(tokens[i], "addgrade") == 0) {

      if (i + 1 < tokencount) {
        char *endptr;
        long  gradeToAdd = strtol(tokens[i + 1], &endptr, 10);
          
        if (*endptr == '\0') {
          addgrade(grades, (int)gradeToAdd);
          i++;
        }

        else 
          puts("Invalid grade format.");       
      } 

      else 
        puts("Missing arguments.");
    } 
    else if (strcmp(tokens[i], "rmgrade") == 0) 
      rmgrade(grades);
    else if (strcmp(tokens[i], "getavg") == 0) 
      printf("Average: %.2f\n", getavg(grades));
    else if (strcmp(tokens[i], "exit") == 0) {
      free(*grades);
      exit(0);
    }

    else 
      printf("%s: Unknown command\n", tokens[i]);
  }
}


void addgrade(int **grades, int grade) {
  int count = (*grades)[0];
  int *temp = realloc(*grades, sizeof(int) * (count + 2));

  if (temp) {
    *grades = temp;
    (*grades)[count + 1] = grade;
    (*grades)[0]++;
  } 

  else 
    puts("Memory reallocation error.");
}

void rmgrade(int **grades) {
  int count = (*grades)[0];

  if (count > 0) {
    int *temp = realloc(*grades, sizeof(int) * (count + 1));

    if (temp) {
      *grades = temp;
      (*grades)[0]--;
    }

    else 
      puts("Memory reallocation error.");
  }

  else 
    puts("No grades to remove.");
}

float getavg(int **grades) {
  float avg   = 0;
  int   count = (*grades)[0];

  for (int i = 1; i <= count; i++) 
    avg += (*grades)[i];
  
  return (count <= 0) ? -1 : avg / count;
}
