#include <stdio.h>

int main(){

  int n=0;

  LOOP:
  printf("%d\n",n);
  n++;
  if( n < 10 ) goto LOOP;

}
