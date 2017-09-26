/*
Paso por referencia en C++
En este ejemplo se muestra que para pasar una variable a una funcion se puede
hacer uso del tipo referencia provisto por C++. Esto permite mas adelante
trabajar con estas variables de la misma forma que variables de tipo no puntero
sin necesidad de desreferenciacion explicita
*/

#include <iostream>

void swap(int &a, int &b){
  int tmp = a; a = b; b = tmp;
}

using namespace std;
int main(){
  int a = 1,b = 9;

  cout << a << " " << b << endl;
  swap(a,b);
  cout << a << " " << b << endl;

  return 0;
}
