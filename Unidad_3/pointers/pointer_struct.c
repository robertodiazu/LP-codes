/*
Ejemplo de punteros y struct en C
Este ejemplo muestra una forma en que se pueden usar punteros y structs,
como asignar y liberar memoria (con el uso de las funciones malloc y free) y el
uso del operador '->' para referenciar a miembros del struct apuntado por un
puntero sin necesidad de usar el operador '*' para desreferenciar el puntero
*/


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
  // nodo = (struct nodo_t*) malloc (sizeof(struct nodo_t)); //equivalente

  (*nodo).info = 3;
  printf("%d\n",(*nodo).info);
  nodo->info = 5;
  printf("%d\n",nodo->info);

  free(nodo);
  return 0;
}
