#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
  Stack s;

  cout << s.empty() << endl;

  s.push(0);
  s.push(1);
  s.push(2);

  cout << s.empty() << endl;
  cout << s.top() << endl;

  s.pop();
  cout << s.top() << endl;

  return 0;
}
