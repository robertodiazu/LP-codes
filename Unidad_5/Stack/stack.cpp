#include "stack.hpp"

Stack::Stack() { // constructor
  stackPtr = new int [100];
  maxLen = 99;
  topPtr = -1;
}

Stack::~Stack () {
  delete [] stackPtr;

}

void Stack::push (int number) {
  if (topPtr == maxLen)
    std::cerr << "Error en push - stack esta lleno\n";
  else
    stackPtr[++topPtr] = number;
}

void Stack::pop () {
  topPtr--;
}

int Stack::top () {
  return stackPtr[topPtr];
}

bool Stack::empty () {
  return topPtr == -1;
}
