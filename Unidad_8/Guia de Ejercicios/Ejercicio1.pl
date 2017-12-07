pareja(carlos,maria).
pareja(felipe,juanita).
pareja(maria,carlos).
pareja(juanita,felipe).

hijo(juanita,maria).
hijo(juanita,carlos).
hijo(carlos,felipe).
hijo(carlos,juanita).
hijo(andres,carlos).
hijo(andres,maria).
hijo(pedro,felipe).
hijo(pedro,juanita).

hermano(X,Y):-hijo(X,Z),hijo(Y,Z),X\==Y.

tio(X,Y):-hermano(X,W),hijo(Y,W).
