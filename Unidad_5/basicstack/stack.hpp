#ifndef __X_H_STACK
#define __X_H_STACK

#include <iostream>


int funcion();


class Stack {
  private: /* no visibles para otros */
    int *stackPtr;
    int maxLen;
    int topPtr;
  public: /* visible para clientes */
    Stack(); /* Un constructor */
    ~Stack(); /* Un destructor */
    void push(int);
    void pop();
    int top();
    bool empty();
};

#endif
