CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: printBack.o sumArray.o main.o Menu.o triangularNum.o main.o 
	g++ printBack.o sumArray.o main.o Menu.o triangularNum.o  -o main
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
printBack.o: printBack.cpp printBack.h
	$(CXX) $(CFLAGS) printBack.cpp
sumArray.o: sumArray.cpp sumArray.h
	$(CXX) $(CFLAGS) sumArray.cpp
triangularNum.o: triangularNum.cpp triangularNum.h
	$(CXX) $(CFLAGS) triangularNum.cpp
clean:
	$(RM) test *.o *~D
