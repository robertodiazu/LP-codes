mejor(A,B,PER):-
    PER=[A , B , _];
    PER=[A , _ , B];
    PER=[_ , A , B].

puzzle(A):-
    PER = [persona(_,primero,cricket,_),persona(_,segundo,_,_),persona(_,tercero,_,_)],
    mejor(persona(michael,_,futbol,_),persona(_,_,_,usa),PER),
    mejor(persona(simon,_,_,israel),persona(_,_,tenis,_),PER),
    member(A,PER).

es_el_australiano(X):-
    puzzle(persona(X,_,_,australiano)).

deporte_de_richard(X):-
    puzzle(persona(richard,_,X,_)).
