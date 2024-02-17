#include <stdio.h>
#include <limits.h>

int main(void)
{

    puts    ("Long long (int) is biggest decimal type in C.");
    printf  ("His value diapason is: %lld to %lld", LLONG_MIN, LLONG_MAX);
    putchar ('\n');

    return 0;
}