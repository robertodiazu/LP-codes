#include <iostream>

//using namespace std;

void funcion(int &x){
  x = x+1;
}

void funcion(int x, int& y){
  x = x+1;
  y = y+1;
}

int main(){
  int x = 0;

  funcion(x,x);


  cout << x << endl;
  return 0;
}
