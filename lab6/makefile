CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Menu.o Main.o Node.o dLinkedList.o
	g++ Menu.o Main.o Node.o dLinkedList.o -o Main
Main.o: Main.cpp
	$(CXX) $(CFLAGS) Main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
Node.o: Node.cpp Node.h
	$(CXX) $(CFLAGS) Node.cpp
dLinkedList.o: dLinkedList.cpp dLinkedList.h
	$(CXX) $(CFLAGS) dLinkedList.cpp
clean:
	$(RM) test *.o *~D
