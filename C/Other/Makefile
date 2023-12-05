TARGET = Maths
CC = gcc
SRC_PREF = ./src/

${TARGET}: square.o powerof.o maths.o
	${CC} square.o maths.o -o square  
	${CC} powerof.o maths.o -o powerof  

square.o: ${SRC_PREF}square.c 
	${CC} -c ${SRC_PREF}square.c

powerof.o: ${SRC_PREF}powerof.c 
	${CC} -c ${SRC_PREF}powerof.c

maths.o: ${SRC_PREF}maths.c 
	${CC} -c ${SRC_PREF}maths.c

clean: 
	rm -f *.o
