CC = g++
CPPFLAGS = -c -Wall -g
OBJ = ./obj/
SRC = ./src/
BIN = ./bin/
INC = ./inc
LFLAGS = -o
IFLAGS = -I$(INC)

all:app

app: $(OBJ)/8dmain.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/8dmain.o

$(OBJ)/8dmain.o: $(SRC)/8dmain.cpp
	$(CC) $(CPPFLAGS) $(SRC)/8dmain.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)/app

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)/app
