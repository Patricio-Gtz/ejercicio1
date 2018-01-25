HEADERS = funciones.h

default: tarea1.exe

tarea1.o: tarea1.c $(HEADERS)
	gcc -c tarea1.c -o tarea1.o

tarea1.exe: tarea1.o
	gcc tarea1.o -o tarea1.exe

clean:
	-rm -f tarea1.o
	-rm -f tarea1.exe
