# Simple makefile to use "make" command to build
make1: main.c binary.c parser.c
	gcc -o main main.c binary.c parser.c -I.
