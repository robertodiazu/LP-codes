parejaCon(carlos,maria).
parejaCon(felipe,juanita).

pareja(X,Y):-parejaCon(X,Y).
pareja(X,Y):-parejaCon(Y,X).

hijon(juanita,maria).
hijon(carlos,felipe).
hijon(andres,carlos).
hijon(pedro,felipe).

hijop(X,Y) :- hijon(X,Z), pareja(Y,Z).
hijo(X,Y):-hijon(X,Y);hijop(X,Y).

hermano(X,Y):-hijo(X,Z),hijo(Y,Z),X\==Y.

tio(X,Y):-hermano(X,W),hijo(Y,W).
