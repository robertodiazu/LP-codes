/*
Ejemplo de variables estaticas
La variable x es una variable global que queda en el espacio de memoria estatica

La variable y declarada dentro de la funcion f1 es declarada como estatica y
queda en el espacio de memoria estatica y sobrevive al fin de la ejecucion de la
funcion

La variable z declarada dentro de la funcion f1 es una variable local que queda en el stack y su tiempo de vida
termina cuando la funcion termina pues es el fin de su ambito
*/

#include <stdio.h>

int x = 0;

void f1(){
  static int y = 0;
  int z = 0;
  x++;
  y++;
  z++;
  printf("y: %d\n",y);
  printf("z: %d\n",z);
}

int main(){
  int i;
  for(i=0;i<3;i++){
    x++;
    printf("x: %d\n",x);
    f1();
  }

  return 0;
}
