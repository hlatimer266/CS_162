CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Building.o Instructor.o main.o Menu.o Person.o Student.o University.o
	g++ Building.o Instructor.o main.o Menu.o Person.o Student.o University.o  -o main
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
Building.o: Building.cpp Building.h
	$(CXX) $(CFLAGS) Building.cpp
Instructor.o: Instructor.cpp Instructor.h
	$(CXX) $(CFLAGS) Instructor.cpp
Person.o: Person.cpp Person.h
	$(CXX) $(CFLAGS) Person.cpp
Student.o: Student.cpp Student.h
	$(CXX) $(CFLAGS) Student.cpp
University.o: University.cpp University.h
	$(CXX) $(CFLAGS) University.cpp
clean:
	$(RM) test *.o *~D
