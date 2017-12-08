# Authors: Group Project 20
# Jerry Change, Jennifer F. Aldover, Jacob Leno, Jeremy Vibber, & Harrison Latimer
# Date: 11/05/2017
# Description: Group Project Makefile
#
# Works Cited:
# CS 162 Week 1 Lecture: Makefiles 

CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -g

OBJS = checkNum.o menu.o Tool.o Rock.o Paper.o Scissors.o RPSGame.o play_game.o

SRCS = checkNum.cpp menu.cpp Tool.cpp Rock.cpp Paper.cpp Scissors.cpp RPSGame.cpp play_game.cpp

HEADERS = checkNum.hpp menu.hpp Tool.hpp Rock.hpp Paper.hpp Scissors.hpp RPSGame.hpp

play_game: $(OBJS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o play_game

$(OBJS): $(SRCS)
	$(CXX) $(CXXFLAGS) -c $(@:.o=.cpp)

clean:
	rm *.o play_game
