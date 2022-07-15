CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: assgn1 assg1

assgn1: $(OBJ)/assgn1.o
	$(CC) $(LFLAGS) $(BIN)/assgn1 $(OBJ)/assgn1.o

$(OBJ)/assgn1.o: $(SRC)/assgn1.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/assgn1.cpp 
	mv *.o $(OBJ)

assg1: $(OBJ)/assg1.o
	$(CC) $(LFLAGS) $(BIN)/assg1 $(OBJ)/assg1.o
	
$(OBJ)/assg1:$(SRC)/assg1.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/assg1.cpp
	mv *.o $(OBJ)
clean: 
	rm -f a.out assgn1
	rm -f *.out
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/assgn1
	rm -f $(BIN)/assg1
	
