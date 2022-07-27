CC = g++
CPPFLAGS = -c -Wall -Werror
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: app

app : $(OBJ)/asgn2c.o $(OBJ)/2cmain.o
	$(CC) -o app $(OBJ)/asgn2c.o $(OBJ)/2cmain.o
	mv app $(BIN)

$(OBJ)/asgn2c.o : $(SRC)/asgn2c.cpp
	$(CC) $(CPPFLAGS) $(SRC)/asgn2c.cpp -I $(INCLUDE)
	mv *.o $(OBJ)/

$(OBJ)/2cmain.o:$(SRC)/2cmain.cpp
	$(CC) $(CPPFLAGS) $(SRC)/2cmain.cpp -I $(INCLUDE)
	mv *.o $(OBJ)/

clean : 
		rm -f a.out app *.o
			rm -f $(OBJ)*.o
			rm -f $(BIN)/app

valgrind:
		valgrind --leak-check=full $(BIN)/app
		mv valgrind $(BIN)

