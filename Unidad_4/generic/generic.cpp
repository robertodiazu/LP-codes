#include <iostream>

using namespace std;

template <class Tipo>
Tipo maximo (Tipo a, Tipo b)
{
  return a > b ? a : b;
}

struct Foo {
  int a;
  double b;
}

int main(){
  int x = 10, y = 100, z;
  char u = 'a', v = 'u', w;
  struct Foo a,b;
  a.a = 0; a.b = 0.0;
  b.a = 1; b.b = 1.0;
  cout << maximo(a,b) << endl;

  z = maximo(x, y);
  w = maximo(u, v);

  cout << z << endl;
  cout << w << endl;

}
