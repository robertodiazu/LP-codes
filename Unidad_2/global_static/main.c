#include <stdio.h>
#include "funcs.h"

void Func1(){
  printf("func1 en main.c\n");
}

int main(){
  Func1();
  Func2();

  return 0;
}
