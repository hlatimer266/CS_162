
CXX=g++
RM=rm -f
CFLAGS=-c -Wall

test: antMain.o Ant.o Grid.o Menu.o
	g++ antMain.o Ant.o Grid.o Menu.o -o antMain
antMain.o: antMain.cpp
	$(CXX) $(CFLAGS) antMain.cpp
Ant.o: Ant.cpp Ant.hpp
	$(CXX) $(CFLAGS) Ant.cpp
Grid.o: Grid.cpp Grid.hpp
	$(CXX) $(CFLAGS) Grid.cpp
Menu.o: Menu.cpp Menu.hpp
	$(CXX) $(CFLAGS) Menu.cpp
clean:
	$(RM) test *.o *~D
