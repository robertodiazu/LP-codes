#include <stdio.h>

int x = 0;

void f1(){
  static int y = 0;
  int z = 0;
  x++;
  y++;
  z++;
  printf("y: %d\n",y);
  printf("z: %d\n",z);
}

int main(){
  int i;
  for(i=0;i<3;i++){
    x++;
    printf("x: %d\n",x);
    f1();
  }
  
  return 0;
}
