CC = gcc
SUM_PREF = ./Counter/
EXE_PREF = ./bin/
TARGETS = lld smartcar sum

.PHONY: all clean

all: $(TARGETS)

lld:  longlong.c
	$(CC) $^ -o $(EXE_PREF)$@

smartcar: smartcar.c
	$(CC) $^ -o $(EXE_PREF)$@

sum: $(SUM_PREF)main.o $(SUM_PREF)counter.o $(SUM_PREF)counter.h
	$(CC) main.o counter.o -o $(EXE_PREF)$@

%.o: %.c 
	$(CC) -c $<

clean:
	rm -f *.o $(EXE_PREF)*