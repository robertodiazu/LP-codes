// Considere el siguiente código:

int x = 10;
void subPrograma(int parametro) {
    x = 30;
    parametro = parametro + 10;
}

int main() { 
    subPrograma(x); 
    printf("%d\n",x);
}

// ¿Cuál es el valor final de la variable global x? Considere que el código esta
// en el lenguaje de programación C#$@ con una sintaxis similar a C y paso de
// parámetros por 
    // valor = 30
    // referencia = 40
    // valor-resultado = 20

// en modo in -> paso por valor
// en modo out -> paso por resultado
// en modo in-out -> paso por valor-resultado, paso por referencia

