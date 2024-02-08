#include <stdio.h>
#include "counter.h"

int main(void)
{
    for (int i = 0; i < 10; ++i){
        addoddtosum();
        printf("%ld\n", sum);
    }
    
    return 0;
}