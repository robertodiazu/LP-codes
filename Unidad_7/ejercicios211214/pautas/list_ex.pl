% Escriba los siguientes predicados

% ultimo(X,L): que determina si X es el último elemento de la lista L

% Respuesta recursiva
ultimo(X, [X]).
ultimo(X, [_|B]) :- ultimo(X,B).

% Respuesta con append
% ultimo(X,L) :- append(_,[X],L).

% reverso(L,R): que determina si la lista R es el inverso de la lista L

% Respuesta con append
reverso([],[]).
reverso([X],[X]).
reverso(L,R) :- append( [A], L1, L), append(R1,[A],R), reverso(L1,R1), !.

% Respuestas recursivas de alumnos

% reverso(L, R):-
% 	reverso2(L, R, []), !.
% reverso2([], R, R).
% reverso2([H|T], R, X):- 
% 	reverso2(T, R, [H|X]).

% reverso([],[]).
% reverso([X|R],L):- 
%     append(R1,[X],L),
%     reverso(R,R1), !.

% palindrome(L): que determina si la lista L es un palindrome. 
% Un palindromo puede ser leído igual hacia adelante y hacia atrás (e.g. [o,s,o], [r,a,d,a,r]).

% Respuesta trivial con reverso
% palindrome(L) :- reverso(L,L).

% Solucion recursiva con append.
palindrome([]).
palindrome([_]).
palindrome(L) :- append( [A], L1, L ), append(L2, [A], L1), palindrome(L2).
