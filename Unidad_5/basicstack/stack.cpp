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
  if( !this->empty() ){
    topPtr--;
  }else{
    std::cerr << "Error en pop - stack esta vacío\n";
  }
}

int Stack::top () {
  /*if( this->empty() ){
    std::cerr << "Error en top - stack esta vacío\n";
    return 0;
  }*/
  return stackPtr[topPtr];
}

bool Stack::empty () {
  return topPtr == -1;
}
