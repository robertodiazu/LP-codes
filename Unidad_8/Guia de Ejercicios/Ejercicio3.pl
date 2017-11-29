my_last(X,L):-L=[X|[]].
my_last(X,L):-L=[_|Y],my_last(X,Y).

reverse(L,R):-L=[],R=[].
reverse(L,R):-
    append(L1,[Y],L),
    append([X],R1,R),
    Y=X,
    reverse(L1,R1),!.

