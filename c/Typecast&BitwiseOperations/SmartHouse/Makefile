CC = gcc
TARGET = proj

.PHONY: all clean

all: $(TARGET)

$(TARGET): main.o controls.o controls.h
	$(CC) main.o controls.o -o $(TARGET)

%.o : %.c 
	$(CC) -c $<

clean: 
	rm -f $(TARGET) *.o

