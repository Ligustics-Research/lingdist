CC = gcc
CFLAGS = -Wall -O2
SRC_DIR = lib
BIN_DIR = bin

# Sources and objects
SRCS = $(SRC_DIR)/test.c $(SRC_DIR)/linglib.c
OBJS = $(BIN_DIR)/test.o $(BIN_DIR)/linglib.o

# Default target
all: $(BIN_DIR)/linglib

# Build the binary
$(BIN_DIR)/linglib: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Build object files
$(BIN_DIR)/%.o: $(SRC_DIR)/%.c $(SRC_DIR)/linglib.h | $(BIN_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Ensure bin/ exists
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean
clean:
	rm -rf $(BIN_DIR)
