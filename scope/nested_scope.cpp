#include <iostream>

int main(){
  int x = 2;
  {
    int x = 3;
    int y = 2*x;
    std::cout << x << "," << y << std::endl;
  }
  std::cout << x << std::endl;

  while(x < 5){
    x++;
    std::cout << x << std::endl;

    int x = 0;
    x++;
    std::cout << x << std::endl;
  }

  return 0;
}
