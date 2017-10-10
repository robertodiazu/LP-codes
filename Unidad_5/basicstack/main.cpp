#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
  Stack s;
  //s.topPtr++;

  cout << s.empty() << endl;
  cout << s.top() << endl; 

  s.push(0);
  s.push(1);
  s.push(2);
  s.push(3);

  cout << s.empty() << endl;
  cout << s.top() << endl;

  s.pop();
  cout << s.top() << endl;

  return 0;
}
