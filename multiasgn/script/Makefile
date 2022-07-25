CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/multiasgn1.o $(OBJ)/utlts.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/multiasgn1.o $(OBJ)/utlts.o


$(OBJ)/multiasgn1.o: $(SRC)/multiasgn1.cpp
	$(CC) $(CFLAGS) $(SRC)/multiasgn1.cpp $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/utlts.o:$(SRC)/utlts.cpp
	$(CC) $(CFLAGS) $(SRC)/utlts.cpp $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"
