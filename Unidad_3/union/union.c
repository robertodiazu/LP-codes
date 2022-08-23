/*
Ejemplo del tipo de dato "union" en C
El tipo de dato union es un tipo de dato que puede almacenar diferentes tipos de
datos en diferentes tiempos en una misma variable. Puede tomar el valor de uno
solo de sus miembros a la vez
*/

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main(){
  union Data data;
  // El tamano en memoria asignado es igual al del miembro mas grande
  printf("Memory size: %lu\n", sizeof(data)); // Memory size: 20

  data.i = 10; // asignando a entero
  printf("data.i: %d\n", data.i);
  data.f = 220.5; // asignando a flotante
  printf("data.f: %f\n", data.f);
  strcpy(data.str, "C Programming"); // asignando a string
  printf("data.str: %s\n", data.str);

  printf("data.f: %f\n", data.f);

  return 0;
}
