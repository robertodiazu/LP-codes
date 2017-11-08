int b = 0;

int funcion(){
  int a = 0;
  int* p;

  while( a++ < 10 ){
    b = a % 2;
    printf("B1\n");//BREAK 1
  }

  if( b == 0 ){
    int b = a;
    char a = 'a';
    p = &a;
    printf("B2\n");//BREAK 2
  }else{
    p = &a;
  }

  printf("B3\n");//BREAK 3
}

int main(){
  funcion();
  return 0;
}
