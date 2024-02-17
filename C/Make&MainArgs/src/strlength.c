#include "mystrings.h"

int strlength(char * string){

    unsigned int lenght = 0;

    for (int i = 0; *(string + i) != '\0'; ++i)
     lenght++;

    return lenght;
}

int main(int argc, char** argv) {

    if (argc < 1)
        printf("Missing arguments");
    else 
        printf("Length: %d\n", strlength(argv[1]));
    
    return 0;
}

