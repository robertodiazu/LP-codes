#include <stdio.h>
#include <limits.h>

int main(){
  float prev, now;
  int i = INT_MAX;
  now = i;
  prev = i;
  printf("%d %f %f\n",i,prev,now);

  while( i > INT_MAX - 1000 ){
    if( prev != now )
      printf("%d %f %f\n",i,prev,now);

    prev = now;
    now = --i;
  }
  
  return 0;
}