my_last(X,L):-L=[X|[]],!.
my_last(X,L):-L=[_|Y],my_last(X,Y).

another_last(X,[X]) :- !.
another_last(X,[_|Y]):- another_last(X,Y).

reverso([],[]).
reverso(L,R):-
    append(L1,[X],L),
    append([X],R1,R),
    reverso(L1,R1),!.

my_reverse(L1,L2) :- my_rev(L1,L2,[]).
my_rev([],L2,L2) :- !.
my_rev([X|Xs],L2,Acc) :- my_rev(Xs,L2,[X|Acc]),!.

palindrome0(L) :- reverse(L,L).

palindrome([]):-!.
palindrome([_]) :-!.
palindrome(L) :- append([X],L1,L), append(L2,[X],L1),  palindrome(L2), !.

pal([]):-!.
pal([_]):-!.
pal(L1) :-  pal_aux(L1,L1,[]),!.

pal_aux([],L2,L2) :- !.
pal_aux([X|Xs],L2,Acc) :- pal_aux(Xs,L2,[X|Acc]).
