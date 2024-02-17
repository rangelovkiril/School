#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <stdlib.h>
#include <string.h>
#include <errno.h>

typedef struct
{
    long int result;
    char error[100];
} transformation;

transformation toNumber(char *);

#endif