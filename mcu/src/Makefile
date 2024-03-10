CC = gcc
BUILD_DIR = ../build
FLAGS = -Wall -Werror -ansi -pedantic

all : mcu_test

mcu_test: mcu_test.o mcu_readl.o mcu_fatal.o mcu_putint.o
	$(CC) $(FLAGS) $^ -o $(BUILD_DIR)$@

mcu_test.o: mcu_test.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_readl.o: mcu_readl.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_fatal.o: mcu_fatal.c
	$(CC) $(FLAGS) -c $^ -o $@

mcu_putint.o: mcu_putint.c
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm -f numbers-test o/*.o
