#include "../headers/safeint.h"

SafeResult safeadd(int a, int b)
{
    char err = 0;
    long result = a + b;

    (result > INT_MAX) ? (err = 1, overflow = 1) : 0;
    (result < INT_MIN) ? (err = 1, underflow = 1) : 0;

    return (SafeResult){.value = result, .errflag = err};
}

SafeResult safesubstract(int a, int b)
{
    char err = 0;
    long result = a - b;

    (result > INT_MAX) ? (err = 1, overflow = 1) : 0;
    (result < INT_MIN) ? (err = 1, underflow = 1) : 0;

    return (SafeResult){.value = result, .errflag = err};
}

SafeResult safemultiply(int a, int b)
{
    char err = 0;
    long result = a * b;

    (result > INT_MAX) ? (err = 1, overflow = 1) : 0;
    (result < INT_MIN) ? (err = 1, underflow = 1) : 0;

    return (SafeResult){.value = result, .errflag = err};
}

SafeResult safedevide(int a, int b)
{
    char err = 0;
    long result = a / b;

    (result > INT_MAX) ? (err = 1, overflow = 1) : 0;
    (result < INT_MIN) ? (err = 1, underflow = 1) : 0;

    return (SafeResult){.value = result, .errflag = err};
}

SafeResult safestrtoint(char *str)
{
    char err = 0;
    short sign = 1;
    int result = 0;

    for (int i = 0; str[i] != '\0' && !err; ++i)
    {
        if (str[i] == '+' && !sign)
            continue;
        else if (str[i] == '-' && !sign)
            sign = -1;
        else if (str[i] >= '0' && str[i] <= '9')
        {
            SafeResult multiplied = safemultiply(result, 10);
            SafeResult endresult = safeadd(multiplied.value, (str[i] - '0'));

            if (multiplied.errflag && endresult.errflag)
                err = 1;

            result = endresult.value;
        }
        else
            err = 1;
    }

    return (SafeResult){.value = result * sign, .errflag = err};
}