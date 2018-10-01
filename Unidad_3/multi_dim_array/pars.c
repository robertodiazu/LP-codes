#include <stdio.h>

void ambos_indices(int a[4][3]){
  for(int i=0;i<4;i++)
    for(int j=0;j<3;j++)
      printf("%d ",a[i][j]);
  printf("\n");

}

void segundo_indice(int a[][3], int n){
  for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
      printf("%d ",a[i][j]);
  printf("\n");
}

void puntero_indice(int (*a)[3], int n){
  for(int i=0;i<n;i++)
    for(int j=0;j<3;j++)
      printf("%d ",a[i][j]);
  printf("\n");
}

void puntero_simple(int *a, int n, int m){
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      printf("%d ",*(a+m*i+j));
  printf("\n");
}


int main(){
  int a[4][3] = {
    {0,1,2},
    {3,4,5},
    {6,7,8},
    {9,10,11}
  };

  ambos_indices(a);
  segundo_indice(a, 4);
  puntero_indice(a, 4);
  puntero_simple(*a, 4,3);

  return 0;
}
