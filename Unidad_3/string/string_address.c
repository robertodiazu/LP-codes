#include <stdio.h>

int main(){
    char a[] = {'h','e','l','l','o','\0'};
    char b[] = "hello";
    char *c = "hello";

    printf("%p\n%p\n%p\n\n",&a,a,&a[0]);
    printf("%p\n%p\n%p\n\n",&b,b,&b[0]);
    printf("%p\n%p\n%p\n",&c,c,&c[0]);
}