CC=g++

VERSION=c++17

DFLAGS=-g3
CFLAGS=$(DFLAGS) -std=$(VERSION) -Wall -Wextra -Werror $(EXTRA_ARGS)


FILES=main.cpp



.PHONY: clean all

all:  clean test

objects: $(OBJECTS)
	
test: $(OBJECTS)
	$(CC) $(FILES) -o test  $(CFLAGS)


clean: 
	rm -f test