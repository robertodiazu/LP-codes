#include <stdio.h>
#include <stdlib.h>

int main(){
  int* z;
  z = (int*)malloc(sizeof(int));
  *z = 50;
  printf("%d\n",z);
  free(z);
  z = NULL;
  return 0;
}
