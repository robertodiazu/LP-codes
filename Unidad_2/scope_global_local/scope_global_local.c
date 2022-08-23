#include <stdio.h>

extern int i;
int j = 100;
static int k = 10;

void f1(){
   printf("%d\n",k);
   int static k = 0;
   printf("%d\n",k);
   if(!k) k++;
}

void f2(){
   printf("%d\n",j);
   for(int j=0; j<9; j++){
      printf("%d ",j);
   }
   printf("\n%d\n",j);
}

int main(){
    f1();
    f1();
    f1();
    f2();
}