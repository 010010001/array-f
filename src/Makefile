# Makefile 

all: af
af: af.o base.o
	gcc -o x af.o base.o

af.o: af.c base.h
	gcc -c -Wall -g  af.c

base.o: base.c base.h
	gcc -c -Wall -g base.c
