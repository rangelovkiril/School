#include "stdio.h"
#include "string.h"

void strhalf(const char * str, char ** half)
{
  size_t l = strlen(str);
  
  *half = str + l/2;
}

int main(int argc, char ** argv)
{
  char *mid    =  NULL; 
  char  name[] = "Kiril";
  
  strhalf(name, &mid);
  printf("%s\n", mid);

  return 0;
}