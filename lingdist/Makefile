# All the targets
all: linglib

# Dependencies and rule to make linglib
linglib: main.o linglib.o
	gcc -o linglib main.o linglib.o

# Rule to make main.o
main.o: main.c linglib.h
	gcc -c main.c

# Rule to make linglib.o
linglib.o: linglib.c linglib.h
	gcc -c linglib.c

# Clean workspace
clean:
	rm -f *.o linglib
