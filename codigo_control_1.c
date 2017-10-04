#include <stdio.h>

void funcion(){
  int x = 1;
  int y = 1;
  int z = 0;

  printf("%d\n",x);
  printf("%d\n",y);

  while( z < 100 ){
    printf("%d\n",x+y);
      int z = y;
      y = x + y;
      x = z;

    z++;
  }
}

int main(){
  funcion();
  return 0;
}
