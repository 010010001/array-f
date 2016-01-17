# Makefile 

all: af
af: af.o base.o#creating the ./af
	gcc -o x af.o base.o

af.o: af.c base.h #creating the af.o
	gcc -c -Wall -g  af.c

base.o: base.c base.h #creating the base.o
	gcc -c -Wall -g base.c
