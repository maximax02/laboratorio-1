todo: socio.o mascota.o
	g++ -Wall -o main Main.cpp
socio.o: Socio.cpp Socio.h fecha.o
	g++ -Wall -c Socio.cpp
mascota.o: Mascota.cpp Mascota.h Genero.h
	g++ -Wall -c Mascota.cpp
fecha.o: DtFecha.cpp DtFecha.h
	g++ -Wall -c DtFecha.cpp
clean:
	rm -f *.o
	rm -f main
