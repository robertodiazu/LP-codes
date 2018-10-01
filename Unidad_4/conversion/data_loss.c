#include <stdio.h>

int main(void)
{
    int i_value   = 16777217;
    float f_value = 16777216.0;
    printf("Entero es: %d\n", i_value);
    printf("Flotante es:   %f\n", f_value);
    printf("Igualdad: %d\n", i_value == f_value);

    printf("Cast Entero a Flotante: %f\n", (float)i_value);
    printf("Cast Flotante a Entero:   %d\n", (int)f_value);
    printf("Cast Entero a Double: %f\n", (double)i_value);
}
