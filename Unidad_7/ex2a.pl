progenitor(maria , pedro).
progenitor(juan, pedro).
progenitor(juan, carola).
progenitor(pedro , ana).
progenitor(pedro , paty).
progenitor(paty, aldo).
masculino(aldo).
masculino(juan).
masculino(pedro).
femenino(ana).
femenino(carola).
femenino(maria).
femenino(paty).

hermana(X, Y) :-
    progenitor(Z, X),
    progenitor(Z, Y),
    femenino(X).

