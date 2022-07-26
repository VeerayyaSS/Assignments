CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin
LFLAGS= -o
CFLAGS = -c -g -Wall -Werror
IFLAGS = -I$(INC)

all: app valgrind

app:$(OBJ)/main5a.o $(OBJ)/5a.o
	$(CC) $(CFLAGS) $(BIN)/app $(OBJ)/main5a.o $(OBJ)/5a.o
	mv app $(BIN)
	
$(OBJ)/5a.o:$(SRC)/5a.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/5a.cpp 
	mv *.o $(OBJ)/

$(OBJ)/main5a.o:$(SRC)/main5a.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/main5a.cpp 
	mv *.o $(OBJ)/

valgrind: 
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)

clean:
	rm -f $(OBJ)/*.o
	rm -f a.out
	rm -f $(BIN)/app

