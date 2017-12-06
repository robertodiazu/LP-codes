mejor(A,B,PER):-
    PER=[A , B , _];
    PER=[A , _ , B];
    PER=[_ , A , B].

puzzle(A):-
    PER = [[Nom1,primero,cricket,Nac1],[Nom2,segundo,Dep2,Nac2],[Nom3,tercero,Dep3,Nac3]],
    mejor([michael,_,futbol,_],[_,_,_,usa],PER),
    mejor([simon,_,_,israel],[_,_,tenis,_],PER),
    member(Nom1,[michael,simon,richard]),
    member(Nom2,[michael,simon,richard]),
    member(Nom3,[michael,simon,richard]),
    member(Dep2,[tenis,futbol]),
    member(Dep3,[tenis,futbol]),
    member(Nac1,[israel,australia,usa]),
    member(Nac2,[israel,australia,usa]),
    member(Nac3,[israel,australia,usa]),
    Nom1 \= Nom2, Nom2 \= Nom3, Nom1 \= Nom3,
    Dep2 \= Dep3,
    Nac1 \= Nac2, Nac2 \= Nac3, Nac1 \= Nac3,
    member(A,PER).
