/*
Ejemplo de string en C
En C no existe el tipo de dato string sino que son meros arreglos de caracteres.
C ofrece funciones de conveniencia para realizar operaciones sobre este tipo de
arreglos
*/

#include <stdio.h>
#include <string.h>

int main(){
  // Inicializacion con literal
  char str[20] = "Esto es un string";
  printf("%s\n",str);

  // Declaracion, y copia de literal en string
  char str2[20];
  strcpy(str,"Esto es otro string");
  printf("%s\n",str2);

  //Funcion de comparacion,
    // retorna 0 si son iguales
    // <0 si el primer caracter distinto tiene menor valor en el primer string
    // >0 si el primer caracter distinto tiene mayor valor en el primer string
  if( strcmp(str,"Esto es un string") == 0 ){
    printf("Son iguales\n");
  }else{
    printf("Son distintos\n");
  }

  // Los strings en C son arreglos de caracteres con un caracter delimitador (\0
  // o caracter nulo) el cual indica el fin del string. Funciones como strcpy en
  // realidad modifican solo lo justo y necesario del arreglo
  strcpy(str,"Mas corto");
  printf("%s\n",str);
  printf("%s\n",str+10); //accediendo mas alla con aritmetica de punteros

  //Concatenacion
  strcat(str,", no tanto");
  printf("%s\n",str);

  return 0;
}
