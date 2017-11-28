
my_last(X,L1) :- append(_,[X],L1).

palindrome(L) :- L = [].
palindrome(L) :- append([],[X],L).
palindrome(L) :- append([X],L1,L), append(L2,[X],L1),  palindrome(L2).

revertir(L,R) :- L = [], R = [].
revertir(L,R) :- append(L1,[X],L), append([X],L2,R), revertir(L1,L2).
