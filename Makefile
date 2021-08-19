CC = g++
CCFLAGS = -fopenmp

BINARY = stressor
SOURCES = stress.cpp

all:
	$(CC) $(CCFLAGS) $(SOURCES) -o $(BINARY)

clean:
	rm -f $(BINARY)