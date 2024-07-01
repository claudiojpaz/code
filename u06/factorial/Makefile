CFLAGS=-Wall

factorial: main.o factorial.o
	gcc main.o factorial.o -o factorial

main.o: main.c
	gcc $(CFLAGS) -c main.c

factorial.o: factorial.c
	gcc $(CFLAGS) -c factorial.c

clean:
	rm -rf main.o factorial.o
