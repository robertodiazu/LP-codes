
// Este es un código de ejemplo mostrando ámbito anidado y ocultamiento.
//
// En un ámbito estático, un lenguaje soporta ámbitos anidados si puede
// declararse un ámbito dentro de otro. Al acceder una variable se buscará
// primero en el ámbito más interno. De no encontrarse buscará en los ámbitos
// externos
//
// Se puede decir que las variables en los ámbitos internos ocultan las
// variables en los ámbitos externos pues no se puede acceder a éstas últimas
// desde el ámbito más interno.

#include <iostream>

int main(){
  int x = 2;
  {
    int x = 3;
    int y = 2*x;
    std::cout << x << "," << y << std::endl; // se accede al x más interno
  }
  // std::cout << x << "," << y << std::endl; //<-- error: y no fue declarada en este ámbito
  std::cout << x << std::endl;

  // bloques (while, for, if, switch) también tienen su propio ámbito
  while(x < 5){
    x++;
    std::cout << x << std::endl;

    int x = 0;
    x++;
    std::cout << x << std::endl;
  }

  for(x=0;x<5;x++){
    std::cout << x << std::endl;
    int x = 0;
    std::cout << x << std::endl;
  }

  x=0;
  if( x == 0 ){
    int x = 100;
    std::cout << x << std::endl;
  }else{
    int x = -100;
    std::cout << x << std::endl;
  }

  switch(x){
    int x; //solo permite declaración
    case 0:
      x = 10; //inicialización al inicio de cada case, si no el compilador lanza un warning
      std::cout << x << std::endl;
      break;
    case 1:
      x = 11;
      std::cout << x << std::endl;
      break;
    default:
      x = 0;
      std::cout << x << std::endl;
      break;
  }
  return 0;
}
