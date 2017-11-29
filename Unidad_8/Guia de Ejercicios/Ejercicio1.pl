pareje(carlos,maria).
pareje(felipe,juanita).
pareja(X,Y):-pareje(X,Y).
pareja(X,Y):-pareje(Y,X).

hije(juanita,maria).
hije(carlos,felipe).
hije(andres,carlos).
hije(pedro,felipe).
hijo(X,Y):-hije(X,Y).
hijo(X,Y):-pareja(Y,Z),hije(X,Z).

hermano(X,Y):-hijo(X,Z),hijo(Y,Z),X\==Y.

tio(X,Y):-hermano(X,W),hijo(Y,W).
