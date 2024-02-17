void swap(void * a, void * b)
{
  int temp = *((int *)a);

  *((int *)a) = *((int *)b);
  *((int *)b) = temp;
}