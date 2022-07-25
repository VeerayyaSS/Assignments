CC = g++
LFLAGS = -o
CFLAGS = -c -g -Wall -Werror
INC = ./inc
IFLAG = -I$(INC)
BIN = ./bin
OBJ = ./obj
SRC = ./src

all: sig1 sig2

sig1: $(OBJ)/sig1.o
	$(CC) $(LFLAGS) $(BIN)/sig1 $(OBJ)/sig1.o

$(OBJ)/sig1.o: $(SRC)/sig1.cpp
	$(CC) $(CFLAGS) $(IFLAG) $(SRC)/sig1.cpp 
	mv *.o $(OBJ)

sig2: $(OBJ)/sig2.o
	$(CC) $(LFLAGS) $(BIN)/sig2 $(OBJ)/sig2.o
	
$(OBJ)/sig2.o:$(SRC)/sig2.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/sig2.cpp
	mv *.o $(OBJ)

valgrind:
	valgrind -leak-ckeck=full $(BIN)/sig1
	mv valgrind $(BIN)
clean: 
	rm -f a.out sig1
	rm -f *.out
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/sig1
	rm -f $(BIN)/sig2
