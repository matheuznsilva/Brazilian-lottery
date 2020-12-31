main:	main.o	funcao.o	selectionSort.o
	gcc main.o funcao.o selectionSort.o -o main

main.o:	main.c
	gcc -c main.c

funcao.o:	funcao.c	funcao.h
	gcc -c funcao.c

selectionSort.o:	selectionSort.c	selectionSort.h
	gcc -c selectionSort.c

clean:
	rm *.o
