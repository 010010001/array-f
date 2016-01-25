# Makefile
CC=gcc
CFLAGS= -I.
ODIR=obj
OBJ=af.o base.o Menu.o
DEPS= bsae.h Menu.h
all: af
	@echo "Finish."
af: $(OBJ)
	@echo "Building the application core.."
	$(CC) -o x $(OBJ) $(CFLAGS)
	
%.o: %.c $(DEPS)
	@echo "Building objects.."
	$(CC) -c -o $@ $< $(CFLAGS)
clean: 
	@echo "Cleaning up.."
	rm -f $(OBJ) x x.exe
win: af
	@echo "Building Windows Executable.."
	$(CC) -o x.exe $(OBJ) $(CFLAGS) 
