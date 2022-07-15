CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin
LFLAGS= -o
CFLAGS = -c -g -Wall -Werror
IFLAGS = -I$(INC)

all: app valgrind

app:$(OBJ)/evenodd.o
	$(CC) $(CFLAGS) $(BIN)/evenodd $(OBJ)/evenodd.o
	mv app $(BIN)

$(OBJ)/evenodd.o:$(SRC)/evenodd.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/evenodd.cpp -o $(OBJ)/evenodd.o
	mv evenodd.o $(OBJ)

valgrind: 
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)

clean:
	rm -f $(OBJ)/*.o
	rm -f a.out
	rm -f $(BIN)/app
