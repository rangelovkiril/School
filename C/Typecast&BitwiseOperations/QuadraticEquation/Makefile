CC = gcc
TARGET = proj

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.o quadraticroots.o quadraticroots.h
	$(CC) main.o quadraticroots.o -lm -o $(TARGET)

%.o : %.c 
	$(CC) -c $<

clean: 
	rm -f $(TARGET) *.o

