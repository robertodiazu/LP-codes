#include <stdio.h>

void ejecutar(void (*fun)(int*),int *a){
  (*fun)(a);
}

void sumarUno(int *a){
  *a += 1;
}

void restarUno(int *a){
  *a -= 1;
}


int main(){
  int a = 3;
  ejecutar(&sumarUno,&a);
  printf("%d\n",a);
  ejecutar(&restarUno,&a);
  ejecutar(&restarUno,&a);
  printf("%d\n",a);

  return 0;
}
