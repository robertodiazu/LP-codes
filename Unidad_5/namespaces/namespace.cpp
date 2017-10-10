#include <iostream>

namespace uno {
  int enteroGlobal = 1;
  float flotanteGlobal = 1;
}

namespace dos {
  int enteroGlobal = -1;
  double doubleGlobal = -1;
}

int main(){
  //std::cout << enteroGlobal << std::endl; //no declarado en este ambito
  std::cout << uno::enteroGlobal << std::endl;
  std::cout << dos::enteroGlobal << std::endl;

  using namespace uno;
  std::cout << flotanteGlobal << std::endl;

  return 0;
}
