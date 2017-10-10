#include <stdio.h>

// void funcionMostrar(int a){
//   printf("%d\n",a);
// }
//
// void funcionMostrar(float a){
//   printf("%f\n");
// }

void funcionMostrar(void* a, int tipo){
  if(tipo == 0){
    printf("%d\n",*(int*)a);
  }else{
    printf("%f\n",*(double*)a);
  }
}

int main(){
  int i = 5;
  double f = 9.7;

  void* v = &f;
  funcionMostrar(v,1);
  v = &i;
  funcionMostrar(v,0);

  return 0;
}
