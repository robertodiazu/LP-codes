my_last(X,L):-L=[X|[]].
my_last(X,L):-L=[_|Y],my_last(X,Y).

reverse(L,R):-L=[],R=[].
reverse(L,R):-
    append(L1,[X],L),
    append([X],R1,R),
    reverse(L1,R1),!.

