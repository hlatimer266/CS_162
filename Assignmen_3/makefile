CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Character.o Menu.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o Main.o
	g++ Character.o Menu.o Barbarian.o BlueMen.o HarryPotter.o Medusa.o Vampire.o Main.o -o Main
Main.o: Main.cpp
	$(CXX) $(CFLAGS) Main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
Character.o: Character.cpp Character.h
	$(CXX) $(CFLAGS) Character.cpp
Barbarian.o: Barbarian.cpp Barbarian.h
	$(CXX) $(CFLAGS) Barbarian.cpp
BlueMen.o: BlueMen.cpp BlueMen.h
	$(CXX) $(CFLAGS) BlueMen.cpp
HarryPotter.o: HarryPotter.cpp HarryPotter.h
	$(CXX) $(CFLAGS) HarryPotter.cpp
Medusa.o: Medusa.cpp Medusa.h
	$(CXX) $(CFLAGS) Medusa.cpp
Vampire.o: Vampire.cpp Vampire.h
	$(CXX) $(CFLAGS) Vampire.cpp
clean:
	$(RM) test *.o *~D
