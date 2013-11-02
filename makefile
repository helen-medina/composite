all: mercancia
mercancia: main.o Mercancia.o Pieza.o Compuesto.o store.o
	g++ -std=c++0x main.o Mercancia.o Pieza.o Compuesto.o store.o -o mercancia
Mercancia.o: Mercancia.cpp 
	g++ -std=c++0x -g -c Mercancia.cpp

Pieza.o: Pieza.cpp 
	g++ -std=c++0x -g -c Pieza.cpp

Compuesto.o: Compuesto.cpp 
	g++ -std=c++0x -g -c Compuesto.cpp
store.o: store.cpp
	g++ -std=c++0x -g -c store.cpp
	
main.o: main.cpp 
	g++ -std=c++0x -g -c main.cpp


imprime:
	@echo "Fin"
clean: 
	 rm -rf *o cuenta
