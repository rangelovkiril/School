#include <stdio.h>
#include <math.h>

void powInForth(long int *, size_t n);

int main (int argc, char **argv){
   
    // Generated with random.org
    long int arr[10] = {3826290, 6124961, 6355574, 7483256, 8913000, 9920850, 15724025, 17320494, 18332124, 19493530};
    size_t lenght = sizeof(arr)/sizeof(arr[0]);
    
    powInForth(arr, lenght);

    for (int i = 0; i < lenght; ++i){
        printf("%ld\n", arr[i]);
    }

    return 0;    
}

void powInForth(long int * arr, size_t l){
    for (int i = 0; i < l; ++i) arr[i] = pow(arr[i], 4);
}