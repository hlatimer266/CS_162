
CXX=g++
RM=rm -f
CFLAGS=-c -Wall

test: countMain.o outputLetters.o countLetters.o
	g++ countMain.o outputLetters.o countLetters.o -o countMain
countMain.o: countMain.cpp
	$(CXX) $(CFLAGS) countMain.cpp
outputLetters.o: outputLetters.cpp outputLetters.hpp
	$(CXX) $(CFLAGS) outputLetters.cpp
countLetters.o: countLetters.cpp countLetters.hpp
	$(CXX) $(CFLAGS) countLetters.cpp
clean:
	$(RM) test *.o *~D
