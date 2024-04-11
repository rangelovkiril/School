#include <stdlib.h>
#include <stdio.h>
#include <string.h>

enum Days 
{
  MONDAY  = 1,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY,
  SUNDAY
};

int main()
{
  char buff[10];
  char day[10];
  int  num;

  if(!fgets(buff, sizeof(buff), stdin))
    fputs("Input error", stderr);

  num = atoi(buff);
  
  switch (num) {

    case MONDAY:    strcpy(day, "Monday");    break; 
    case TUESDAY:   strcpy(day, "Tuesday");   break; 
    case WEDNESDAY: strcpy(day, "Wednesday"); break; 
    case THURSDAY:  strcpy(day, "Thursday");  break; 
    case FRIDAY:    strcpy(day, "Friday");    break; 
    case SATURDAY:  strcpy(day, "Saturday");  break; 
    case SUNDAY:    strcpy(day, "Sunday");    break; 
  
    default:
      fputs("Incorrect day!\n", stderr);
      return -1;
  }

  printf("%s\n", day);

  return 0;
}