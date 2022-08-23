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
puntaje(lauren,-20).
puntaje(julia,50).
puntaje(sean,30).
puntaje(luke,70).
puntaje(madeleine,40).
puntaje(wendy,60).
puntaje(john,-10).
puntaje(edward,-15).
puntaje(eric,-30).
puntaje(virginia,20).
puntaje(nicola,15).
puntaje(caroline,5).

% Escribir una regla sumar_lista(L,P), donde P es la suma de los puntajes de la lista L. 
% No puede usar sum_list para el desarrollo de esta regla.

% Escribir una regla puntaje_final(E, P), donde P es la suma de los puntos obtenidos por los integrantes del equipo E.

suma_puntajes(E, S):-
	integrantes(E, L),  suma(L, S).

suma([], 0).
suma([A|B], S):- suma(B, Sr), puntaje(A, P), S is Sr + P.

integrantes(E, L):- ints(E, L, []), !.

ints(E, L, R):- equipo(E, A), not(member(A, R)), append(R, [A], R1), ints(E, L, R1). 
ints(_, L, L).
