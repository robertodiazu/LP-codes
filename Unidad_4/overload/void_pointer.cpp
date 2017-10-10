#include <stdio.h>

void funcionMostrar(int a){
  printf("%d\n",a);
}

void funcionMostrar(double a){
  printf("%f\n",a);
}

double funcionMostrar(int a, double a){
  
}


int main(){
  int i = 5;
  double f = 9.7;

  // void* v = &f;
  funcionMostrar(i);
  // v = &i;
  funcionMostrar(f);

  return 0;
}
