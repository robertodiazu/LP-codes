#include <stdio.h>
#include <stdlib.h>

struct nodo_t {
  int info;
  struct nodo_t* siguiente;
};
typedef struct nodo_t* enlace_t;

int main(){
  enlace_t nodo;
  nodo = (enlace_t) malloc(sizeof(struct nodo_t));

  (*nodo).info = 3;
  printf("%d\n",(*nodo).info);
  nodo->info = 5;
  printf("%d\n",nodo->info);

  free(nodo);
  return 0;
}
