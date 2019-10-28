all: main.o list.o
	gcc -o program main.o list.o

main.o: main.c headers.h
	gcc -c main.c

list.o: list.c headers.h
	gcc -c list.c

run:
	./program

clean:
	rm *.o
	rm *~
