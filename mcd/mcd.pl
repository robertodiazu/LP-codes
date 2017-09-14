% Ejemplo de Maximo Comun Divisor en Prolog
% En el paradigma lógico lo que se indican son reglas o predicados
% para posteriormente llevar a cabo una consulta
% En este caso: mcd(69,120,X).

%main:- mcd(69,120,X),writeln(X).

mcd(A,B,G) :- A = B, G = A.
mcd(A,B,G) :- A > B, C is A-B, mcd(C,B,G).
mcd(A,B,G) :- B > A, C is B-A, mcd(C,A,G).
