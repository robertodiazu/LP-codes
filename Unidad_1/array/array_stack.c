/**
  Este ejemplo muestra la creación de un arreglo como variable del stack.
  En C, variables declaradas dentro de funciones quedan almacenadas en el stack.
  En este ejemplo, el tamaño del arreglo delimitado por ARRAY_SIZE es tan grande
  que puede exceder el tamaño máximo del stack indicado por el compilador y lanza una
  violación de segmento.
*/

#include <stdio.h>

#define ARRAY_SIZE 10000000

int main(){
  int arreglo[ARRAY_SIZE];

  int i;
  for(i=0;i<ARRAY_SIZE;i++){
    arreglo[i] = i;
  }
  printf("%d",arreglo[ARRAY_SIZE-1]);
  return 0;
}
