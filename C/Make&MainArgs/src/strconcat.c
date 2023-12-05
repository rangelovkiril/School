#include "mystrings.h"

void strconcat(char* str1, char* str2){
    
    int i = 0, j = 0;

    while (str1[i] != '\0') 
       i++, j++; 

    i = 0;

    while (str2[i] != '\0') {
        str1[j] = str2 [i];
        i++, j++; 
    }

    str1[j] = '\0';

}

int main(int argc, char** argv){

    if (argc < 2)
        printf("Missing arguments");
    else {
        
         strconcat(argv[1], argv[2]);
         printf("%s", argv[1]);
        }   

}

