#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct empleado {
    char* nombre;
    char* apellido;
    double sueldo;
};

void procesar_empleado(char* nombre, char* apellido ){
    struct empleado *a, *b;
    a = malloc( sizeof(struct empleado) );
    a->nombre = nombre;
    a->apellido = apellido;
    strcpy(a->nombre, nombre);
    strcpy(a->apellido, apellido);
    a->sueldo = 301000;
    //...
    free(a);
    b = a;
    b->sueldo *= 2;
    printf("Nuevo sueldo: %f\n", b -> sueldo);
}

void empleado_proceso(char* nombre, char* apellido ){
    struct empleado *a, *b;
    a = malloc( sizeof(struct empleado) );
    a->nombre = malloc( 16*sizeof(char) );
    a->apellido = malloc( 16*sizeof(char) );
    strcpy(a->nombre, nombre);
    strcpy(a->apellido, apellido);
    a->sueldo = 301000;
    //...
    b = a;
    b->sueldo *= 2;
    printf("Nuevo sueldo: %f\n", b -> sueldo);
    free(a);
}



int main(){
    //empleado_proceso( "roberto", "diaz" );
    procesar_empleado( "roberto", "diaz");
}
