/*
Ejemplo de punteros y struct en C++
Este ejemplo muestra una forma en que se pueden usar punteros y structs,
como asignar memoria (con los operadores new y delete) y el uso del operador
'->' para referenciar a miembros del struct apuntado por un puntero sin
necesidad de usar el operador '*' para desreferenciar el puntero.
*/

#include <iostream>
#include <cstdlib>

struct nodo_t {
  int info;
  struct nodo_t* siguiente;
};
typedef struct nodo_t* enlace_t;

int main(){
  enlace_t nodo;
  nodo = new struct nodo_t;

  (*nodo).info = 3;
  printf("%d\n",(*nodo).info);
  nodo->info = 5;
  printf("%d\n",nodo->info);

  delete nodo;
  return 0;
}
