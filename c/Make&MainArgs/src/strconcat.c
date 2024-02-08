#include "mystrings.h"

void strconcat(char *str1, char *str2)
{

    int i = 0, j = 0;

    while (str1[i] != '\0')
        i++, j++;

    i = 0;

    while (str2[i] != '\0')
    {
        str1[j] = str2[i];
        i++, j++;
    }

    str1[j] = '\0';
}

int main(int argc, char **argv)
{

    int invalidrange = 0;

    for (int i = 0; argv[1][i] != '\0' && argv[2][i] != '\0'; ++i)
    {
        if (i > 50)
        {
            invalidrange = 1;
            break;
        }
    }

    /*
    Because of entry point in strlength function defined in included header, it cannot be used.
    This solution isn't best way to solve this problem, but considering the fact that strlenght is
    serealized, and not used from string.h, I find it as acceptable.
    */

    if (argc < 2)
        printf("Missing arguments");

    if (invalidrange)
    {
        printf("Invalid arguments format: must be less than 50 characters");
    }

    else
    {

        strconcat(argv[1], argv[2]);
        printf("%s\n", argv[1]);
    }
}
