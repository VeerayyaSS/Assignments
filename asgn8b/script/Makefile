CC = g++
CPPFLAGS = -c -Wall -g
OBJ = ./obj
SRC = ./src
BIN = ./bin
INC = ./inc
LFLAGS = -o
IFLAGS = -I$(INC)
all: app

app: $(OBJ)/8bmain.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/8bmain.o

$(OBJ)/8bmain.o: $(SRC)/8bmain.cpp
	$(CC) $(CPPFLAGS) $(SRC)/8bmain.cpp $(IFLAGS)
	mv *.o $(OBJ)

valgrind:
	valgrind --leak-check=full $(BIN)/app

clean:
	rm -f a.out app *.o
	rm -f $(OBJ)*.o
	rm -f $(BIN)/app
