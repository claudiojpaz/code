CC=gcc
BIN=cuenta

$(BIN): cuenta.o inc.o
	$(CC) cuenta.o inc.o -o $(BIN)

cuenta.o: cuenta.c
	$(CC) -c cuenta.c

inc.o: inc.c
	$(CC) -c inc.c

clean:
	rm *.o
	rm $(BIN)
