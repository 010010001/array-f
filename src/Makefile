# Makefile template for shared library

all: af
	@echo "Finish.."
af: af.o base.o Menu.o
	@echo "Building the application core.."
	gcc -o x af.o base.o Menu.o
	
af.o: af.c base.h
	@echo "Building af.o.."
	gcc -c  -Wall -g af.c

base.o: base.c base.h
	@echo "Building base.o.."
	gcc -c  -Wall -g base.c
Menu.o: Menu.c Menu.h
	@echo "Building Menu.o.."
	gcc -c -Wall -g Menu.c 
clean: 
	@echo "Cleaning up.."
	rm -f af.o base.o Menu.o x x.exe
win: af
	@echo "Building Windows Executable.."
	gcc -o x.exe af.o base.o Menu.o

