# ==========================================
# © 2020 EExuke. All Rights Reserved.
# ==========================================

DIR_OBJ = ./
DIR_SRC = ./
INC_SRC = ./

SRC = $(wildcard ${DIR_SRC}/*.cpp)
OBJ = $(patsubst %.cpp, ${DIR_OBJ}/%.o, $(notdir $(SRC)))

BIN_TARGET = main

API_FILE = function

CC = g++
CFLAGS = -g -Wall -I $(INC_SRC)

${BIN_TARGET}: ${OBJ}
	$(warning Building $(BIN_TARGET) ...)
	@$(CC) $(OBJ) -o $@

${DIR_OBJ}/%.o: ${DIR_SRC}/%.cpp
	$(warning Comping $< ...)
	@$(CC) $(CFLAGS) -c $< -o $@

# Prevent naming conflicts such as the existence of a file named clean.
.PHONY: clean
.PHONY: shared

shared:
	$(CC) ${API_FILE}.cpp -shared -fPIC -o lib${API_FILE}.so

clean:
	@rm -f ./*.o ./*.so
	@rm -rf $(BIN_TARGET)

