CC = gcc
BUILD_DIR = ../build
FLAGS = -Wall -Werror -ansi -pedantic

all : mcu_rev

exo6.o: exo6.c 
	$(CC) $(FLAGS) -c $^ -o $@

mcu_readl.o: mcu_readl.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_fatal.o: mcu_fatal.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_rev.o: mcu_rev.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_rev: exo6.o mcu_readl.o mcu_fatal.o mcu_rev.o
	$(CC) $(FLAGS) $^ -o $(BUILD_DIR)$@

clean:
	rm -f mcu_rev *.o
	
	
PHONY: clean
