#include <stdio.h>

int i, j, k;
int *ptr;


int my_array[] = {1,2,3,4,5};
int *aptr;
void main()
{
  j = 1;
  k = 2;
  ptr = &k;
  aptr = &my_array[0];

  printf("\n");
  for (i = 0; i < 6; i++){
    printf("array[%d] = %d\n", i, *(aptr + 1));
    aptr = aptr + 1;
  }

  printf("\n");
  printf("j has the value %d and it stored in the address %p\n", j, (void *)&j);
  printf("k has the value %d and is stored in the address %p\n", k, (void *)&k);
  printf("ptr has the value %ls and is stoed at %p\n", ptr, (void *)&ptr);
  printf("The value of the integer pointed to by ptr is %d\n", *ptr);
}
