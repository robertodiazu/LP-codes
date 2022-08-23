#include <stdio.h>
#include <stdlib.h>

// void funcionMostrar(int a){
//   printf("%d\n",a);
// }

// void funcionMostrar(float a){
//   printf("%f\n");
// }

void funcionMostrar(void* a, int tipo){
  if(tipo == 0){
    printf("un entero: %d\n",*(int*)a);
  }else{
    printf("un flotante: %f\n",*(double*)a);
  }
}

int main(){
  int i = 5;
  double f = 9.7;

  funcionMostrar(&f,1);
  
  funcionMostrar(&i,0);


  return 0;
}
