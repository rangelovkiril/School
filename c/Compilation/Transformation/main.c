#include <stdio.h>
#include "transformation.h"

int main(int argc, char **argv)
{
    transformation valid, invalid;
    
    valid = toNumber("1234");
    invalid = toNumber("123sdas1231");

    printf("Valid: result = %ld, error = %s \n", valid.result, valid.error);
    printf("Invalid: result = %ld, error = %s \n", invalid.result, invalid.error);
    
    return 0;
}