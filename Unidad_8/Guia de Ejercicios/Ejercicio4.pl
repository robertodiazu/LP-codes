mejor(A,B,PER):-
    PER=[A , B , _];
    PER=[A , _ , B];
    PER=[_ , A , B].

puzzle(A):-
    PER = [[_,primero,cricket,_],[_,segundo,_,_],[_,tercero,_,_]],
    mejor([michael,_,futbol,_],[_,_,_,usa],PER),
    mejor([simon,_,_,israel],[_,_,tenis,_],PER),
    member(A,PER).