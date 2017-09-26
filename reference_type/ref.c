/*
Paso por referencia en C
En este ejemplo se muestra que para pasar una variable a una funcion y que la
funcion pueda modificarla se debe pasar como puntero
*/

#include <stdio.h>

void swap(int *a, int *b){
  int tmp = *a; *a = *b; *b = tmp;
}


int main(){
  int a = 1,b = 9;

  printf("%d %d\n",a,b);
  swap(&a,&b);
  printf("%d %d\n",a,b);

  return 0;
}
