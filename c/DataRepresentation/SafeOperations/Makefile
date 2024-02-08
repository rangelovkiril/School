CC = gcc
PREF_SRC = ./src/
PREF_UTILS = ./utils/
PREF_OBJ = ./obj/
HEAPREF_DER = ./headers/

SRC = $(wildcard $(PREF_SRC)*.c)
UTILS = $(wildcard $(PREF_UTILS)*.c)
UTILS_OBJ = $(patsubst $(PREF_UTILS)%.c, $(PREF_OBJ)%.o, $(UTILS))
OBJ = $(patsubst $(PREF_SRC)%.c, $(PREF_OBJ)%.o, $(SRC)) $(UTILS_OBJ)
HEADER = $(wildcard $(HEAPREF_DER)*.h)

TARGETS = $(notdir $(basename $(SRC)))

.PHONY: all clean

all: $(TARGETS)

$(TARGETS): % : $(OBJ)
	$(CC) $(UTILS_OBJ) $(PREF_OBJ)$*.o -o $@

$(PREF_OBJ)%.o: $(PREF_SRC)%.c $(HEADER)
	$(CC) -c $< -o $@

$(PREF_OBJ)%.o: $(PREF_UTILS)%.c $(HEADER)
	$(CC) -c $< -o $@

clean:
	rm -f $(PREF_OBJ)*.o $(TARGETS)
