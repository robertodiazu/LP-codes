/*
Ejemplo de string en C++
En C++ la STL ofrece el tipo de dato string siendo max flexible que los arreglos
de caracteres
*/

#include <iostream>
#include <string>
//#include <cstring> //string.h

using namespace std;

int main(){
  // Inicializacion con literal
  string str;
  str = "Esto es un string";
  cout << str << endl;

  // Inicializacion con constructor
  string str2("Esto es otro string");
  cout << str2 << endl;

  // Funcion de comparacion
    // retorna 0 si son iguales
    // <0 si el primer caracter distinto tiene menor valor en el primer string
    // >0 si el primer caracter distinto tiene mayor valor en el primer string
  if( str.compare("Esto es un string") == 0 ){
    printf("Son iguales\n");
  }else{
    printf("Son distintos\n");
  }

  // En C++ este tipo de dato no es un arreglo y por tanto no es un puntero
  // constante al inicio por lo que no podemos aplicar aritmetica de punteros

  str = "Mas corto";
  cout << str << endl;
  //cout << str + 10 << endl; //<-- mismatched types

  // Sin embargo, podemos obtener el arreglo de caracteres subyacente con la
  // funcion c_str()
  cout << str.c_str() + 10 << endl;

  // El operador + es usado para la concatenacion
  str += ", no tanto";
  cout << str;

  return 0;
}
