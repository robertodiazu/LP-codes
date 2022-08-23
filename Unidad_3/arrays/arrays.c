#include <stdio.h>
#include <stdlib.h>

#define N 10000000

// arreglo estatico
int a[N];


int main(int argc, char** argv){
    // arreglo dinamico fijo de stack
    int b[N];
    
    int n;
    // arreglo dinamico de stack
    if (argc == 2) {
        n = atoi(argv[1]);
    } else {
        n = N;
    }
    printf("n=%d\n",n);
    
    //arreglo dinamico de stack
    int c[n];

    printf("%lu\n",sizeof(c));

    //arreglo fijo de heap
    int* d = malloc(n*sizeof(int));

    // usar arreglos

    free(d);
    
    return 0;
}