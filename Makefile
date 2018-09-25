CXX = g++
CXXFLAGS	= -std=c++11 -Wall
CXXTESTFLAGS = --coverage 
CXXGDB = -ggdb

all: main

clean:
	rm output main.cpp
 
main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o output
