#include <stdio.h>
#include "../headers/safeint.h"
#include "../headers/util.h"

int underflow = 0;
int overflow = 0;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Missing arguments\n");
        return -1;
    }
    
    SafeResult n = safestrtoint(argv[1]);
    SafeResult m = safestrtoint(argv[2]);

    SafeResult result = safesubstract(n.value, m.value);

    if(overflow || underflow)
        printerror();
    else 
        printf("%d\n", result.value);

    return 0;
}