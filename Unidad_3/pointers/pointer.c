#include <stdio.h>
#include <stdlib.h>

int main(){
  int *ptr1;
  ptr1 = (int*)malloc(sizeof(int));
  *ptr1 = 432;
  free(ptr1);

  int *ptr2, j;
  j = 876;
  ptr2 = &j;


  printf("%d",*ptr2);

  return 0;
}
