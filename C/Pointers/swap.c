void swap(void * a, void * b){
    int * temp = (int *)a;
    a = (int *) b; 
    b =     temp;
}