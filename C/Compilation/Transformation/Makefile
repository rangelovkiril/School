TARGET = "transformation"

${TARGET} : main.o transformation.o
	gcc transformation.o main.o -o ${TARGET}

main.o : main.c
	gcc -c main.c main.o

transformation.o: transformation.c transformation.h
	gcc -c transformation.c transformation.o

clean: 
	rm -f *.o 
	clear