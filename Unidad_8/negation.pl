serpiente(a).
serpiente(b).
animal(c).

gusta(maria, X):- serpiente(X), !, fail; animal(X).
