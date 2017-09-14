/**
  Este ejemplo muestra la creación de un arreglo como variable global
  quedando en el área de 'data' del programa. El tamaño de este segmento de memoria
  es usualmente calculado previamente por el compilador y se mantiene constante durante
  la ejecución.
*/

#include <stdio.h>

#define ARRAY_SIZE 1

int arreglo[ARRAY_SIZE] = {50};

int main(){
  int i;
  for(i=0;i<ARRAY_SIZE;i++){
    arreglo[i] = i;
  }
  printf("%d",arreglo[ARRAY_SIZE-1]);
  return 0;
}
