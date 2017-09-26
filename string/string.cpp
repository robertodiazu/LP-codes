#include <iostream>
//#include <cstring> //string.h
#include <string>

using namespace std;

int main(){
  string str;
  str = "Esto es un string";
  cout << str << endl;

  string str2 = "Esto es otro string";
  cout << str2 << endl;

  if( str.compare("Esto es un string") == 0 ){
    printf("Son iguales\n");
  }else{
    printf("Son distintos\n");
  }

  str = "Mas corto";
  cout << str << endl;
  //cout << str + 10 << endl; //<-- mismatched types
  cout << str.c_str() + 10 << endl;

  return 0;
}
