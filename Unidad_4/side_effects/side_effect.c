#include <stdio.h>

int a = 2;

int f1() {
  return a++;
}

int f2 (int i) {
  return (--a * i);
}

int main(){
  printf("%i\n", f1()*f2(3));
  return 0;
}
