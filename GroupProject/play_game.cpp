/*********************************************************************
** Program name: Group Project - Play Rock, Paper, Scissors
** Authors: Group Project 20
** Jerry Chang, Jennifer F. Aldover, Jacob Leno, Jeremy Vibber, & Harrison Latimer
** Date: 11/05/2017
** Description: Play Rock, Paper, Scissors is a game that lets the user
** to play against the computer in matches of Rock, Paper, Scissors. The
** user has the option of setting the strength of their tool to a number 
** or playing a traditional match without setting strength.
**
** To compile, enter make into the terminal. To run, enter ./play_game into
** the terminal. To remove object files, enter make clean.
*********************************************************************/

#include "RPSGame.hpp"

int main(){
	RPSGame game;

	game.gameplay();
	
	return 0;
}
