#include <stdio.h>
#include "funcs.h"

static void Func1(void){
  printf("Func1 en funcs.c\n");
}

void Func2(void)
{
  Func1();
  printf("Func2 en funcs.c\n");
}