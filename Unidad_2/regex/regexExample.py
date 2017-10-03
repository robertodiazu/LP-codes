# Ejemplo de expresiones regulares en Python

import re

#   Primero se debe compilar la expresion regular en un PatternObject
#   El PatternObject puede ser usado para calces o busquedas de la expresion regular
prog = re.compile("(a|b)*b+");
print prog

#   Search retorna un MatchObject el cual contiene el calce
result = prog.search("abbbb");
print result
if result:
    print result.group(0); #    MatchObject.group(0) retorna un string con todo el calce

result = prog.search("abbababaa");
print result
if result:
    print result.group(0);

#   Si no se encuentra un calce, search retorna None
result = prog.search("aaa")
print result
if result:
    print result.group(0);  # Esto no se ejecuta

#   Los parentesis permiten agrupar resultados y obtenerlos divididos en grupos
prog = re.compile("(1) (22) (333)")
result = prog.search("1 22 333")
if result:
    print result.groups();
    print result.group(0);  # Retorna todo el calce
    print result.group(1);  # Retorna el primer grupo
    print result.group(2);  # Retorna el segundo grupo
    print result.group(3);  # Retorna el tercer grupo

#   No es necesario usar la funcion compile
#   Pero si se usan muchas expresiones distintas es mejor
#   pues el codigo es mas legible y permite mejor reutilizacion
#   Python guarda en una cache las ultima RegEx utilizadas
result = re.search("(a|b)*b+","abbb");
print result
if result:
    print result.group(0);
