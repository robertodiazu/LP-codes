fake23( [] ).
fake23( [ HI ,X , HC ] ) :- fake23( HI ) , integer( X ) , fake23( HC ).
fake23( [ HI ,X , HC ,Y , HD ] ) :- fake23( HI ) , integer( X ) , fake23( HC ) , integer( Y ) , fake23( HD ) , X < Y .

gryffindor(gordic).
gryffindor(minerva).
gryffindor(harry).
hufflepuff(helga).
hufflepuff(newt).
hufflepuff(cedric).
ravenclaw(rowena).
ravenclaw(sybill).
ravenclaw(luna).
slytherin(salazar).
slytherin(draco).
slytherin(tom).

puntos(gordic,-20).
puntos(tom,50).
puntos(cedric,30).
puntos(minerva,70).
puntos(luna,40).
puntos(rowena,60).
puntos(draco,-10).
puntos(harry,-15).
puntos(newt,-30).

sumar_puntaje([],0).
sumar_puntaje([X|L],P):-sumar_puntaje(L,N),P is X+N.
puntaje_final(CASA,P):-findall(N,(call(CASA,X),puntos(X,N)),A),sumar_puntaje(A,P).


phoem([],[]).
phoem([X|A],[X,X|B]):- phoem(A,B).
