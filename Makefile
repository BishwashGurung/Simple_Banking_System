# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Wall

# Include directories
INCLUDES = -I./include

# Source directories
SRC_DIR = ./src
MAIN_DIR = ./main

# Object files
OBJS = $(SRC_DIR)/BankAccount.o $(SRC_DIR)/SavingsAccount.o $(SRC_DIR)/CheckingAccount.o

# Target executable
TARGET = BankingSystem

all: $(TARGET)

$(TARGET): $(OBJS) $(MAIN_DIR)/main.o
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c -o $@ $<

clean:
	rm -f $(OBJS) $(MAIN_DIR)/main.o $(TARGET)

.PHONY: all clean
