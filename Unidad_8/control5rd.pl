
borrar(_,[],[]).

borrar(X,[X|L],L) :- !.
borrar(X,[A|L1],[A|L2]) :- borrar(X,L1,L2).

borrarN(_,[],[]).
borrarN(N,L1,_) :- length(L1,LEN), N >= LEN, !, fail.
borrarN(0,[X|L1],L1) :- !.
borrarN(N,[A|L1],[A|L2]) :- N1 is N - 1, borrarN(N1,L1,L2).

borrarLN(_,[],[]).
borrarLN([],L,L).

borrarLN([X|LN], L1, L2 ) :- borrarN(X, L1, L3), borrarLN(LN, L3, L2).
