progenitor(maria, pedro).
progenitor(juan, pedro).
progenitor(juan, carola).
progenitor(cristian, camila).
progenitor(camila, paty).
progenitor(camila, ana).
progenitor(pedro, ana).
progenitor(pedro, paty).
progenitor(paty,aldo).

hijo(Y,X) :- progenitor(X,Y).
    