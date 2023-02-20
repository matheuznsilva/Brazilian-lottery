main:	main.o	linkedlist.o	funcao.o
	gcc main.o linkedlist.o funcao.o -o main

main.o:	main.c
	gcc -c main.c

linkedlist.o:	linkedlist.c	linkedlist.h
	gcc -c linkedlist.c

funcao.o:	funcao.c	funcao.h
	gcc -c funcao.c

clean:
	rm *.o
