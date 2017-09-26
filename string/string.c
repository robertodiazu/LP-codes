#include <stdio.h>
#include <string.h>

int main(){
  char str[20];
  strcpy(str,"Esto es un string");
  printf("%s\n",str);

  char str2[20] = "Esto es otro string";
  printf("%s\n",str2);

  if( strcmp(str,"Esto es un string") == 0 ){
    printf("Son iguales\n");
  }else{
    printf("Son distintos\n");
  }

  strcpy(str,"Mas corto");
  printf("%s\n",str);
  printf("%s\n",str+10);

  return 0;
}
