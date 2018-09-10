
#include <stdio.h>

int main(){
  int x = 2;
  {
    int x = 3;
    int y = 2*x;
    printf("%d, %d\n", x,y); // se accede al x más interno
  }
  // std::cout << x << "," << y << std::endl; //<-- error: y no fue declarada en este ámbito
  printf("%d\n",x);

  // bloques (while, for, if, switch) también tienen su propio ámbito
  while(x < 5){
    x++;
    printf("%d\n",x);

    int x = 0;
    x++;
    printf("%d\n",x);
  }

  for(x=0;x<5;x++){
    printf("%d\n",x);
    int x = 0;
    printf("%d\n",x);
  }

  x=0;
  if( x == 0 ){
    int x = 100;
    printf("%d\n",x);
  }else{
    int x = -100;
    printf("%d\n",x);
  }

  switch(x){
    int x; //solo permite declaración
    case 0:
      x = 10; //inicialización al inicio de cada case, si no el compilador lanza un warning
      printf("%d\n",x);
      break;
    case 1:
      x = 11;
      printf("%d\n",x);
      break;
    default:
      x = 0;
      printf("%d\n",x);
      break;
  }
  return 0;

  return 0;
}
