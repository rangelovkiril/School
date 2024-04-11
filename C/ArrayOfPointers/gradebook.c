#include "stdio.h"
#include "stdlib.h"
#include <string.h>

#define MAX_STR_LEN 15                    \
                  + 1  /* fgets-added \0 */    
char *read() 
{
  char * name = NULL;
  char   buffer [256];
  int    len;
   
  char * result = fgets(buffer, sizeof(buffer), stdin);
  if (!result){
    puts("Input fatal error!");
    return NULL;
  }
    
  len = strlen(buffer);

  if (len <= MAX_STR_LEN)
    len--;
  else {
    puts("Name too long");
    return NULL;
  }

  name = (char *)malloc(sizeof(char) * len);
  name ? strcpy(name, buffer) : NULL;

  return name;
}

void addstudent(char ***students, char ***subjects, int *studentscount, int subjectscount) {
 
    (*studentscount)++;


    *students = (char **)realloc(*students, (*studentscount) * sizeof(char *));

    if (*students == NULL) {
       
        puts("Memory allocation failed.");
        return;
    }

    (*students)[(*studentscount) - 1] = read();

    for (int i = 0; i <= subjectscount; ++i) {
        printf("Enter year grade for %s:\t", (*subjects)[i]);
        char * grade = read();
    }
}

int main(int argc, char **argv) 
{
  char **students = NULL;
  char **subjects = NULL;
  int  **grades   = NULL;

  int subjectscount;
  int studentscount;

  puts("This is simple gradebook program. First you need to initialize book\n\
and then you can interact with these comands: \n\
  \tdisplay       Display gradebook \n\
  \tadd <name>    Add student       \n\
  \texit          Exit the program  \n\
  ");

  puts("Enter intial number of subjects:");
  scanf("%d", &subjectscount);
  getchar();

  subjects = (char **)calloc(1, sizeof(char *));

  for (int i = 0; i < subjectscount; ++i){
    subjects[i] = read();
  }
   
  for(int i = 0; i < subjectscount; ++i)
    printf("%s\n", subjects[i]);

  puts("Enter intial number of students:");
  scanf("%d", &studentscount);
  getchar();


  for(int i = 0; i < studentscount; ++i){
    printf("%d, %d", studentscount, subjectscount);
    addstudent(&students, &subjects, &studentscount, subjectscount);
  }

  for(int i = 0; i < subjectscount; ++i)
    free(subjects[i]);
  free(subjects);

  return 0;
}