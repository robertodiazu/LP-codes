#include <stdio.h>
#include "file1.h"
#include "file2.h"

int main(){
  printf("Main:%d\n",hacerAlgunaCosa(3));

  printf("Main:%d\n",hacerOtraCosa(3.0));

  printf("Main:%f\n",estaFuncionExisteSoloParaElEjemplo(3,3.0));

  return 0;
}
