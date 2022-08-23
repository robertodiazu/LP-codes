
arcod(a,b,5).
arcod(a,c,3).
arcod(b,d,2).
arcod(b,e,-1).
arcod(c,a,-5).
arcod(c,b,5).
arcod(d,e,2).
arcod(d,a,-4).
arcod(e,a,0).
arcod(e,c,4).

incidente(X,Y) :- arcod(Y,X,_).

incidentes(X,L) :- findall( N, incidente(X,N), L).

zeronegativos(L) :- findall([X,Y], (arcod(X,Y,Z), Z=<0 ), L ).
