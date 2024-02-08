#include "transformation.h"

static long int isInteger(char *input);

transformation toNumber(char *input)
{

    long int value = isInteger(input);
    transformation resultstruct;
    char * msg; 


    if (!value){
        msg = "Invalid input string";
        resultstruct.result = 0;
    }
    else
    {
        msg = "\0";
        resultstruct.result = value;  
    }

    strcpy(resultstruct.error, msg);
    return resultstruct;
};

static long int isInteger(char *input){

    char *endptr;
    long int value = strtol(input, &endptr, 10);

    if (errno == ERANGE) value = 0;
	else if (*endptr != '\n' && *endptr != '\0') value = 0;

    return value;
}