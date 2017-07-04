CC := g++
DEBUG := -g
CFLAGS := -std=c++14
LFLAGS := -Wall
SOURCEDIR := src
SOURCES := $(shell find $(SOURCEDIR) -name '*.cpp')
MAZE := $(shell find -name 'maze.txt')
BINARY := Game.out

.PHONY: clean

p1:
	$(CC) $(CFLAGS) $(SOURCES) -o $(BINARY)

p2:
	$(CC) $(LFLAGS) $(CFLAGS) $(SOURCES) $(DEBUG) -o $(BINARY)

all: p1

debug: p2

run: all
	./$(BINARY) $(MAZE)

clean:
	\rm ./$(BINARY)

distclean: clean
