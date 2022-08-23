/**
Ejemplo de Maximo Comun Divisor en C
En paradigma imperativo es usual que el computo se realice como una secuencia
de instrucciones con ciclos y condicionales
*/

#include <stdio.h>

int mcd(int a, int b) {
    while (a != b) {
      if (a > b) a = a - b;
      else b = b - a;
      }
    return a;
}

int main(){
  printf("%d\n",mcd(69,120));
  return 0;
}

