CC = gcc
BUILD_DIR = ../build
FLAGS = -Wall -Werror -ansi -pedantic

all : mcu_wl

mcu_wl.o: mcu_wl.c 
	$(CC) $(FLAGS) -c $^ -o $@

mcu_wc.o: mcu_wc.c
	$(CC) $(FLAGS) -c $^ -o $@

exo5.o: exo5.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_putint.o: mcu_putint.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_wl: mcu_wl.o exo5.o mcu_putint.o 
	$(CC) $(FLAGS) $^ -o $(BUILD_DIR)$@

mcu_wc: mcu_wc.o exo5.o mcu_putint.o
	$(CC) $(FLAGS) $^ -o $(BUILD_DIR)$@

clean:
	rm -f mcu_wl *.o
	
PHONY: clean
