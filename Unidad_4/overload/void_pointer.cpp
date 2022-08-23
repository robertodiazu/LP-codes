#include <stdio.h>

void funcionMostrar(int a){
  printf("Entero:%d\n",a);
}

void funcionMostrar(double a){
  printf("Flotante:%f\n",a);
}

double funcionMostrar(int a, double b){
  printf("Ambos:%d %f\n",a,b);
}

int main(){
  int i = 5;
  double f = 9.7;

  funcionMostrar(i);
  funcionMostrar(f);
  funcionMostrar(i,f);

  return 0;
}
