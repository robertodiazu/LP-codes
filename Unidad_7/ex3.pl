progenitor(maria, pedro).
progenitor(juan, pedro).
progenitor(juan, carola).
progenitor(pedro, ana).
progenitor(pedro, paty).
progenitor(paty,aldo).

antepasado(X,Z) :- progenitor(X,Z).
antepasado(X,Z) :- progenitor(X,Y), antepasado(Y,Z).
