CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: randBuff.o Menu.o pallindrome.o main.o 
	g++ randBuff.o Menu.o pallindrome.o main.o -o Main
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp
randBuff.o: randBuff.cpp randBuff.h
	$(CXX) $(CFLAGS) randBuff.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
pallindrome.o: pallindrome.cpp pallindrome.h
	$(CXX) $(CFLAGS) pallindrome.cpp
clean:
	$(RM) test *.o *~D