serpiente(a).
serpiente(b).
animal(c).
animal(d).
animal(a).
animal(b).

gusta1(maria,X) :- \+ serpiente(X), animal(X).

gusta2(maria,X) :- animal(X), \+ serpiente(X).
