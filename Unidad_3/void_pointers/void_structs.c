#include <stdio.h>
#include <stdlib.h>

struct Foo {
  void *a;
  int tipo; //quizas sea mejor con un Enum
};

void mostrarDato(struct Foo f){
  switch(f.tipo){
    case 0: //int
      printf("%d\n",*(int*)f.a);
      break;
    case 1: //char
      printf("%c\n",*(char*)f.a);
      break;
    case 2: //double
      printf("%f\n",*(double*)f.a);
      break;
    default:
      printf("Tipo no valido\n");

  }
}

int main(){
  struct Foo f;

  f.a = malloc(sizeof(int));
  f.tipo = 0;
  *(int*)f.a = 5;
  mostrarDato(f);

  f.a = realloc(f.a,sizeof(char));
  f.tipo = 1;
  *(char*)f.a = 'L';
  mostrarDato(f);

  f.a = realloc(f.a,sizeof(double));
  f.tipo = 2;
  *(double*)f.a = 9.7;
  mostrarDato(f);

  free(f.a);

  return 0;
}
