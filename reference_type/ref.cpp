#include <iostream>

void swap(int &a, int &b){
  int tmp = a; a = b; b = tmp;
}

using namespace std;
int main(){
  int swap;

  int a = 1,b = 9;

  cout << a << " " << b << endl;
  swap(a,b);
  cout << a << " " << b << endl;

  return 0;
}
