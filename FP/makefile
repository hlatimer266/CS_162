CXX=g++ -std=c++11
RM=rm -f
CFLAGS=-c -Wall

test: Entrance.o Menu.o FinalTest.o main.o RealmOfLight.o RoomOfPrep.o ShadowRoom.o Space.o TrialOfTears.o 
	g++ Entrance.o Menu.o FinalTest.o main.o RealmOfLight.o RoomOfPrep.o ShadowRoom.o Space.o TrialOfTears.o -o Main
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp
Menu.o: Menu.cpp Menu.h
	$(CXX) $(CFLAGS) Menu.cpp
Entrance.o: Entrance.cpp Entrance.h
	$(CXX) $(CFLAGS) Entrance.cpp
FinalTest.o: FinalTest.cpp FinalTest.h
	$(CXX) $(CFLAGS) FinalTest.cpp
RealmOfLight.o: RealmOfLight.cpp RealmOfLight.h
	$(CXX) $(CFLAGS) RealmOfLight.cpp
RoomOfPrep.o: RoomOfPrep.cpp RoomOfPrep.h
	$(CXX) $(CFLAGS) RoomOfPrep.cpp
ShadowRoom.o: ShadowRoom.cpp ShadowRoom.h
	$(CXX) $(CFLAGS) ShadowRoom.cpp
Space.o: Space.cpp Space.h
	$(CXX) $(CFLAGS) Space.cpp
TrailOfTears.o: TrialOfTears.cpp TrialOfTears.h
	$(CXX) $(CFLAGS) TrialOfTears.cpp
clean:
	$(RM) test *.o *~D