#include <stdio.h>

/**
  Este ejemplo muestra una falta de confiabilidad en el lenguaje C
  Esto pues un error del programador puede llevar a comportamiento inesperado
  Este programa puede hacer alguna de las tres siguientes, dependiendo de la
  implemtanción y optimizaciones del compilador:
  - Modificara el otro arreglo
  - El programa terminara con una violacion de segmento
  - El programa se ejecutará exitosamente sin ningún comportamiento extraño observable
  Cabe notar que la verificación de los indices de un arreglo conlleva una ligera
  perdida en el rendimiento
*/

int main(){
  int array_a[5],array_b[5],i;
  for(i=0;i<5;i++){
    array_b[i] = 0;
  }
  for(i=0;i<15;i++){  //Se sale de los limites
    array_a[i] = i;
  }

  for(i=0;i<5;i++){
    printf("%d ",array_a[i]);
  }
  printf("\n");
  for(i=0;i<5;i++){
    printf("%d ",array_b[i]);
  }
  printf("\n");

  return 0;
}
