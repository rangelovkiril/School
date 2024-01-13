#ifndef PROCESSES_H
#define PROCESSES_H

#include <stdlib.h>
#include <string.h>
#include <time.h>

#include <stdio.h>

typedef unsigned int u32;

typedef struct  
{
   char name[30];
   u32  pid;
} Process;

#define MAX_PROCESSES 5
extern Process processes  [MAX_PROCESSES];
extern u32     uniquepids [MAX_PROCESSES];
extern u32     processcount;


u32  createnewprocess(char * name);

void stopprocess(u32 pid);

#endif /* PROCESSES_H */