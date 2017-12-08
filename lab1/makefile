
CXX=g++
RM=rm -f
CFLAGS=-c -Wall

test: matrixMain.o readMatrix.o Determinant.o
	g++ matrixMain.o readMatrix.o Determinant.o -o matrixMain
mainMatrix.o: matrixMain.cpp
	$(CXX) $(CFLAGS) matrixMain.cpp

readMatrix.o: readMatrix.cpp readMatrix.hpp
	$(CXX) $(CFLAGS) readMatrix.cpp

Determinant.o: Determinant.cpp Determinant.hpp
	$(CXX) $(CFLAGS) Determinant.cpp

clean:
	$(RM) test *.o *~D
