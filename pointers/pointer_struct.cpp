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
