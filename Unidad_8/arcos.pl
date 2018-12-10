arco(1,2).
arco(1,3).
arco(2,4).
arco(2,5).
arco(2,6).
arco(3,2).
arco(3,4).
arco(4,5).
arco(4,6).
arco(5,2).

nodos_entrantes(X,L):-findall(N,arco(N,X),L).
nodos_salientes(X,L):-findall(N,arco(X,N),L).
nodos_vecinos(X,L):-findall(N,(arco(N,X);arco(X,N)),L).
arcos(X,L):-findall([N,M],(arco(N,M),(N=X;M=X)),L).