CC = gcc
FLAGS = -Wall -g
AR = ar
O_FILES = main.o my_mat.o
.PHONY: clean all

all : connections
connections:$(O_FILES)
	$(CC) $(O_FILES) -o connections

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

clean: 
	rm -f $(O_FILES) connections