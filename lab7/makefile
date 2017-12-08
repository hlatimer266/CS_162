CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Menu.o Main.o Queue.o 
	g++ Menu.o Main.o Queue.o -o Main
Main.o: Main.cpp
	$(CXX) $(CFLAGS) Main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
Queue.o: Queue.cpp Queue.h
	$(CXX) $(CFLAGS) Queue.cpp
clean:
	$(RM) test *.o *~D
