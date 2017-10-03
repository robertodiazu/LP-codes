#!/bin/bash

# Este es un código de ejemplo mostrando ámbito dinámico
# En ámbito dinámico se determina el ámbito en base a la secuencia de las
# llamadas de funciones.
# En este caso la variable x fue declarada en el ámbito global, pero también es
# declarada nuevamente dentro de la función p2. La variable x esta en el ámbito
# local de p2.

# Debido a que bash soporta ámbito dinámico, la función p1 va a buscar las
# variables primero en el ámbito local, luego en el ámbito de las funciones que
# se han llamado y luego en el ámbito global

# Si se llama a p2, la función p1 imprimira un 5 pues accede a la variable
# declarada en p1, y este valor se mantiene una vez que se retorna el control
# a la función p2 que imprime 4

# Si se llama desde el ámbito global, la función p1 imprimirá 1 pues es el valor
# de la variable declarada globalmente y es la primera instancia de x que
# encuentra p1.

x=1;
p1 () {
  echo "En p1: $x";
  x=4;
}

p2 () {
  local x=5;
  p1;
  echo "En p2: $x";
}

p2;
echo "En main: $x";
p1;
