#include <stdio.h>
#include <string.h>

typedef struct {
  struct {
    char primer [10];
    char paterno [10];
    char materno [10];
  } nombre ;
  float sueldo;
} empleado_t;

int main(){
  empleado_t pelao, guaton;

  guaton.sueldo = 550000.00;
  strcpy( pelao.nombre.primer, "Juan " );

  printf("%s\n", pelao.nombre.primer);

}
