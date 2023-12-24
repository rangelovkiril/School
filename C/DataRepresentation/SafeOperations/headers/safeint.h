#ifndef SAFEINT_H
#define SAFEINT_H

#include <stdio.h>
#include <limits.h>

extern int underflow;
extern int overflow;

typedef struct {
    int value;
    char errflag;
} SafeResult;

SafeResult safeadd(int, int);

SafeResult safesubstract(int, int);

SafeResult safemultiply(int, int);

SafeResult safedevide(int, int);

SafeResult safestrtoint(char*);

#endif /*SAFEINT_H*/