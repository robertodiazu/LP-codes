#include <iostream>

using namespace std;

template <class Tipo>
Tipo maximo (Tipo a, Tipo b)
{
  return a > b ? a : b;
}

int main(){
  int x = 10, y = 100, z;
  char u = 'a', v = 'u', w;
  z = maximo(x, y);
  w = maximo(u, v);

  cout << z << endl;
  cout << w << endl;

}
