perro(spike).
perro(milton).
perro(chip).
gato(michi).
gato(gatuzo).
gato(neko).
gato(jake).
canario(piolin).
canario(purin).

dueno(javier,milton).
dueno(erick,michi).
dueno(fran,spike).
dueno(fran,purin).
dueno(javier,jake).
dueno(erick,piolin).
dueno(erick,neko).
dueno(fran,gatuzo).
dueno(fran,chip).

mascotas(X,L):-findall(N,dueno(X,N),L).

es_especie(X,A):-call(X,A).

perros_de(X,L):-findall(N,(perro(N),dueno(X,N)),L).
