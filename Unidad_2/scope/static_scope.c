/*
Este es un código de ejemplo mostrando ámbito estático
En ámbito estático se determina el ámbito en base a la estructura del código
fuente.

En este caso la variable x fue declarada en el ámbito global, pero también es
declarada nuevamente dentro de la función p2. La variable x esta en el ámbito
local de p2.

Debido a que C soporta ámbito estático, la función p1 va a buscar las
variables primero en el bloque de ejecución, luego en el ámbito local de la
función y finalmente en el ámbito global.

Sin importar desde donde se llame p1, está accederá al valor de la variable
global.

La función p2 accede a la variable local x que es un parámetro. Esta variable
deja de existir una vez que p2 termina.
*/

#include <stdio.h>

int x = 1;
void p1(){
   printf("En p1: %d\n",x);
   x=4;
}

void p2(){
   int x = 5;
   p1();
   printf("En p2: %d\n",x);
}

int main(){
  printf("En main: %d\n",x);
  p2();
  printf("En main: %d\n",x);
  p1();
  printf("En main: %d\n",x);
  return 0;
}
