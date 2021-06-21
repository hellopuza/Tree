####

CC = g++
CFLAGS = -c -O3 -std=c++17
LDFLAGS =
SOURCES = main.cpp StringLib/StringLib.cpp StackLib/hash.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = .bin/Tree

all: $(SOURCES) $(EXECUTABLE) clean

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) $(LIBS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(OBJECTS)


