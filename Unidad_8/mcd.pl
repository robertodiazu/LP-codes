
mcd(X, X, X).

mcd(X, Y, D) :-
  X < Y,
  Y1 is Y - X,
  mcd(X, Y1, D).

mcd(X, Y, D) :-
  Y < X,
  mcd(Y, X, D).
