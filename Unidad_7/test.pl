
cualesson([X],[v],X).
cualesson([Y],[f],X) :- X \== Y.
cualesson([X|B],[t|C],X) :- cualesson(B,C,X).
cualesson([A|B],[f|C],X) :- A \== X, cualesson(B,C,X).
