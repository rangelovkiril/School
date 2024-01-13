#include "controls.h"

void switchlight(int lightpos, char *house)
{

    if (lightpos > 7 || lightpos < 0){
        printf("Invalid room number. Please enter number from 1 to 8.\n");
        return;
    }

    char switchpos = 1 << (lightpos - 1); 

    *house ^= switchpos; 
};

void printstate(char house)
{
    if (!house)
    {
        printf("No lights on.\n");
        return;
    }

    printf("Lights are turned on in rooms ");

    for (int i = 0; i < CHAR_BIT; ++i)
        if ((house >> i) & 1)
            printf("%d ", i + 1);

    printf("\n");
};
