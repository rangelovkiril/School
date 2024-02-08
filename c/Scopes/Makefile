CC = gcc
TARGET = proj

.PHONY: all clean

all: $(TARGET)

$(TARGET): taskmanager.o processes.o processes.h
	$(CC) processes.o taskmanager.o -o $(TARGET)

%.o : %.c 
	$(CC) -c $<

clean: 
	rm -f $(TARGET) *.o

