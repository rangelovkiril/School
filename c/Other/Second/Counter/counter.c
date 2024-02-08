#include "counter.h"

long        sum        = 1;
static long currentodd = 1;

static long nextodd()
{
    currentodd += 2;
    return currentodd;
};

void addoddtosum() { sum += nextodd(); };
