CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: SearchAlgos.o Main.o 
	g++ SearchAlgos.o Main.o -o Main
Main.o: Main.cpp
	$(CXX) $(CFLAGS) Main.cpp
SearchAlgos.o: SearchAlgos.cpp SearchAlgos.h
	$(CXX) $(CFLAGS) SearchAlgos.cpp
clean:
	$(RM) test *.o *~D
