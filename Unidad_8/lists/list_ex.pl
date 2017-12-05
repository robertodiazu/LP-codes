
my_last(X,L1) :- append(_,[X],L1).

palindrome([]).
palindrome(L) :- append([],[X],L).
palindrome(L) :- append([X],L1,L), append(L2,[X],L1),  palindrome(L2).

revertir(L,R) :- L = [], R = [].
revertir(L,R) :- append(L1,[X],L), append([X],L2,R), revertir(L1,L2).

% P04 (*): Find the number of elements of a list.

% my_length(L,N) :- the list L contains N elements
%    (list,integer) (+,?)

% Note: length(?List, ?Int) is predefined

my_length([],0).
my_length([_|L],N) :- my_length(L,N1), N is N1 + 1.
