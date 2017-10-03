#include <iostream>

int main(){
  int a = 3;
  //-(--a);
  a = a++;
  std::cout << a;

  return 0;
}
