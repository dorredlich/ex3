
FLAGS= -Wall -g

CC=gcc



all: isort txtfind


isort: main.o isort.o
	 $(CC) $(FLAGS) -o isort main.o isort.o

txtfind: maintxt.o txtfind.o
	$(CC) $(FLAGS) -o txtfind maintxt.o txtfind.o

main.o: main.c
	 $(CC) $(FLAGS) -c main.c

maintxt.o: maintxt.c
	 $(CC) $(FLAGS) -c maintxt.c

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c

txtfind.o: txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c



.PHONY:	clean all

clean:
	rm -f *.o isort txtfind

