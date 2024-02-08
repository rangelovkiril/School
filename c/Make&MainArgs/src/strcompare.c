#include "mystrings.h"

int strcompare(char * str1, char * str2){
    int cmp = 0;
    for(int i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i){
        if (str1[i] > str2 [i]){
            cmp = 1;
            break;
        }
        else if(str1[i] < str2 [i]){
            cmp = -1;
            break;
        }
    }
    
    return cmp;
}

int main(int argc, char** argv){

    if (argc < 2)
        printf("Missing arguments");
    else 
        printf("%d\n", strcompare(argv[1], argv[2]));
       
}
