# Universidad Sergio Arboleda				  
# Computacion Paralela y Distribuida          
# Ejercicio: Compilacion por Separado         
# Presentado por: Miguel Salazar di Colloredo 

# Makefile

GCC = gcc 
FLAGS = -ansi -pedantic -Wall -std=c99
CFLAGS = -lm

PROGS = principal

all: $(PROGS)

principal:
	$(GCC) $(FLAGS) $@.c -c
	$(GCC) $(FLAGS) modulo.c -c 
	$(GCC) $(FLAGS) -o $@ $@.o modulo.o $(CFLAGS)

clean:
	$(RM) *.o $(PROGS)

