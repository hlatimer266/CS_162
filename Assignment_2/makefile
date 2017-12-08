CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Animal.o Zoo.o Penguin.o Tiger.o Turtle.o ZooMenu.o zooMain.o
	g++ Animal.o Zoo.o Penguin.o Tiger.o Turtle.o ZooMenu.o zooMain.o  -o zooMain
zooMain.o: zooMain.cpp
	$(CXX) $(CFLAGS) zooMain.cpp
ZooMenu.o: ZooMenu.cpp
	$(CXX) $(CFLAGS) ZooMenu.cpp
Animal.o: Animal.cpp Animal.h
	$(CXX) $(CFLAGS) Animal.cpp
Zoo.o: Zoo.cpp Zoo.h
	$(CXX) $(CFLAGS) Zoo.cpp
Penguin.o: Penguin.cpp Penguin.h
	$(CXX) $(CFLAGS) Penguin.cpp
Tiger.o: Tiger.cpp Tiger.h
	$(CXX) $(CFLAGS) Tiger.cpp
Turtle.o: Turtle.cpp Turtle.h
	$(CXX) $(CFLAGS) Turtle.cpp
clean:
	$(RM) test *.o *~D
