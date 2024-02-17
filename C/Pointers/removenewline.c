#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) 
{
  char buf[256];

  fgets(buf, sizeof(buf), stdin);

  char *nl = strchr(buf, '\n');
  if (!nl)
    *nl = '\0';

  printf("Clear string: %s", buf);

  return 0;
}