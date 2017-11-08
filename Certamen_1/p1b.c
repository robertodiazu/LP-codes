#include <stdio.h>
#include <stdlib.h>

int liberar(int* p, int* q){
    free(p);
    p = NULL;
    free(q);
    q = NULL;

    printf("%p %p\n",p,q);

    return 0; //oops
}

int main(){
  int* p = (int*)malloc(sizeof(int));
  int* q = (int*)malloc(sizeof(int));

  printf("%p %p\n",p,q);

  liberar(p,q);

  printf("%p %p\n",p,q);

  return 0;
}
