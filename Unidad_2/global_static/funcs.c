#include <stdio.h>

static void Func1(void){
  printf("Func1\n");
}

void Func2(void)
{
  Func1();
  printf("Func2\n");
}
