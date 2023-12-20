TARGET = Proj
CC = gcc
SRC_PREF = ./src/

.PHONY: all clean 

${TARGET} : menu.o strlength.o strconcat.o strcompare.o
	${CC} menu.o -o ${TARGET}
	${CC} strlength.o -o strlength
	${CC} strconcat.o -o strconcat
	${CC} strcompare.o -o strcompare

menu.o: ${SRC_PREF}menu.c 
	${CC} -c ${SRC_PREF}menu.c menu.o

strlength.o: ${SRC_PREF}strlength.c 
	${CC} -c ${SRC_PREF}strlength.c 

strconcat.o: ${SRC_PREF}strconcat.c 
	${CC} -c ${SRC_PREF}strconcat.c 

strcompare.o: ${SRC_PREF}strcompare.c 
	${CC} -c ${SRC_PREF}strcompare.c 

clean:
	rm -f $(TARGET) *.c
