# Makefile for building the 'my_cos' program
all: main

main: main.o my_cos.o
	gcc -o main main.o my_cos.o -lm

main.o: main.c my_cos.h
	gcc -c main.c

my_cos.o: my_cos.c my_cos.h
	gcc -c my_cos.c

clean:
	rm -f *.o main