/*
Ejemplo de variables dinamicas de heap
Estas variables son declaradas y quedan asignadas en el espacio de memoria
dinamico que es el heap que es mucho mas flexible. La memoria de esta variable
debe ser asignada y liberada explicitamente. 
*/

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
