CC=gcc -g 
PROGRAMS=bitabit

.PHONY: clean

all:
	@echo "Tapez 'make program' où programme est parmi : $(PROGRAMS)"


bitabit: bitabit.o bit_operations.o

bitabit.o: bitabit.c bit_operations.h
bit_operations.o: bit_operations.c bit_operations.h

clean:
	rm *.o $(PROGRAMS)