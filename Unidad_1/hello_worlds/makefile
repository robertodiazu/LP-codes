
all: c_helloworld cpp_helloworld java_helloworld scheme_helloworld prolog_helloworld python_helloworld
	

# C
# Compilar, ejecutar y eliminar
c_helloworld:
	gcc helloworld.c -o helloworld.out && ./helloworld.out && rm helloworld.out

# C++
# Compilar, ejecutar y eliminar
cpp_helloworld:
	g++ helloworld.cpp -o helloworld.out && ./helloworld.out && rm helloworld.out

# Java 
java_helloworld:
	java HelloWorld.java

# Scheme (usando Racket/DrRacket)
scheme_helloworld:
	racket helloworld.scm


# Prolog (usando SWI-prolog)
# -q evita que salga el banner
# -s carga un archivo de consultas
# -t ejecuta cierta meta
prolog_helloworld:
	prolog -q -s helloworld.pl -t "main."

# Python3
python_helloworld:
	python3 helloworld.py