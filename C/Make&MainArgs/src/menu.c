#include <stdio.h>
#include "mystrings.h"

int main(int argc, char** argv)
{
    printf("This is information about programs strlength, strconcat & strcompare.\n");

    printf("strlength \n This function takes string from conmand line arguments and evaluates it's length. \n\n");
    printf("strconcat \n This function takes two strins from conmand line arguments and concatenate them. \n\n");
    printf("strcompate \n This function takes two strins from conmand line arguments evalate differences between them -\n if both has same lengh it returns 0, othersiwe when first is bigger returns 1 or when second is bigger -1. \n\n");
    return 0;
}