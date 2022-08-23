% regla#1
f(X, 0) :- X < 3, !.
% regla#2
f(X, 2) :- X >= 3, X < 6, !.
% regla#3
f(X, 4) :- !, X >= 6.
f(X, 4) :- X >= 6.