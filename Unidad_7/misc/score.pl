% En un cierto juego, existen cuatro equipos cada uno con tres integrantes:
equipo(alpha, lauren).
equipo(alpha, julia).
equipo(alpha, sean).
equipo(bravo, luke).
equipo(bravo, madeleine).
equipo(bravo, wendy).
equipo(gamma, john).
equipo(gamma, edward).
equipo(gamma, eric).
equipo(delta, virginia).
equipo(delta, nicola).
equipo(delta, caroline).

% En el juego, los distintos miembros obtienen una cierta cantidad de puntos.
puntos(lauren,-20).
puntos(julia,50).
puntos(sean,30).
puntos(luke,70).
puntos(madeleine,40).
puntos(wendy,60).
puntos(john,-10).
puntos(edward,-15).
puntos(eric,-30).
puntos(virginia,20).
puntos(nicola,15).
puntos(caroline,5).

% Escribir una regla sumar_lista(L,P), donde P es la suma de los puntajes de la lista L. 
% No puede usar sum_list para el desarrollo de esta regla.

sumar_lista([],0).
sumar_lista([A|L], S) :- sumar_lista(L,SR), S is SR+A.

% Escribir una regla puntaje_final(E, P), donde P es la suma de los puntos obtenidos por los integrantes del equipo E.

% Solucion con findall
puntaje_final_f(E,P) :- findall(S,(equipo(E,A),puntos(A,S)),Bag), sumar_lista(Bag,P).

% Solucion recursiva
% Buscar los integrantes del equipo y luego sumar sus puntajes
puntaje_final(E,P) :- integrantes(E,L), puntaje_jugadores(P,L).

% Caso base: la lista vacía suma 0 puntos
puntaje_jugadores(0,[]). 
% Caso recursivo: obtenemos el puntaje de la cola y luego se lo suma al jugador en la cabeza
puntaje_jugadores(P,[A|L]) :-  puntaje_jugadores(SR,L), puntos(A,S), P is S + SR. 

% Para obtener los integrantes usamos un predicado auxiliar que armará una lista inicialmente vacía
integrantes(E,L) :- ints(E,L,[]), !.
% Caso recursivo: mete todos los integrantes de un equipo en la tercera lista
%   al estar antes que el caso base, se podría pensar que caera en un loop infinito,
%   pero las dos primeras submetas evitan esto pues eventualmente se agotaran las opciones
%   Notar que si el not esta antes, dejará de realizar backtracking con el primer valor que arroje verdadero.
ints(E,L,R) :- equipo(E,A), not(member(A,R)), R1 = [A|R], ints(E,L,R1).
% Caso base: al estar después, la 3ra componente será una lista con todos los integrantes 
%   y se unifica con la lista resultado (2da componente)
ints(E,L,L).