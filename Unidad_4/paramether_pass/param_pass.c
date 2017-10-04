#include <stdio.h>

int funcion(int a, int *b){
  a+=1;
  *b += 1;
  int* c = &a;
  return *c;
}

int main(){
  int a = 0, b = 0, c;
  c = funcion(a,&b);
  printf("%d %d %d",a,b,c);
  return 0;
}
