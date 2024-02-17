#include <stdio.h>
#include <string.h>

#define SWAP(A, B, TYPE) swap(&A, &B, #TYPE);

void swap(void *, void *, char *);

int main(int argc, char **argv, char **envp)
{
    int a = 429, b = 1430;
    float c = 3.141592, d = 2.718182;
    char str_e[10] = "If only I had the Theorems!", str_f[10] = "Bernhard Riemann";

    printf("%d, %d\n", a, b);
    printf("%f, %f\n", c, d);
    printf("%s, %s\n", str_e, str_f);

    SWAP(a, b, int);
    SWAP(c, d, float);
    SWAP(str_e, str_f, char *);

    printf("%d, %d\n", a, b);
    printf("%f, %f\n", c, d);
    printf("%s, %s\n", str_e, str_f);

    return 0;
}

void swap(void *a, void *b, char *type)
{
    if (!strcmp(type, "int"))
    {
        int temp = *((int *)a);
        *((int *)a) = *((int *)b);
        *((int *)b) = temp;
    }
    else if (!strcmp(type, "float"))
    {
        float temp = *((float *)a);
        *((float *)a) = *((float *)b);
        *((float *)b) = temp;
    }
    else if (!strcmp(type, "char *"))
    {
        char *temp = *(char **)a;
        *(char **)a = *(char **)b;
        *(char **)b = temp;
    }
}