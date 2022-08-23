

iguales(A,B) :- aux_igual(A,B,[]).

aux_igual([], B, C) :- B = C, !.
aux_igual(A,B,C):- A = [H | T], append( C, [H], D ), aux_igual(T, B, D ).

caso(A1).
caso(A2) :- 
caso(A3) :- 

%iguales( [1,2,3], [1,2,3] ) :-
    %aux_igual( [1,2,3], [1,2,3], [] ) :-
    %    A = [1,2,3], B = [1,2,3], C = [], H = 1, T = [2,3], D = [1], aux_igual( [2,3], [1,2,3], [1] ) :-
     %       A = [2,3], B = [1,2,3], C = [1], H = 2, T = [3], D = [1,2], 


% par([[A,B]],_,_,_,_):-!.
