/*********************************************************************
** Class Name: RPSGame
** Date: 10/30/17
** Description: Header file for the RPSGame class. 
*********************************************************************/

#ifndef RPSGAME_HPP
#define RPSGAME_HPP

#include "Tool.hpp" 
#include "checkNum.hpp"
#include "menu.hpp"
#include "Rock.hpp"
#include "Paper.hpp"
#include "Scissors.hpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iostream>

using std::cout;
using std::endl;


class RPSGame
{
public:
	Tool *humanPtr, *computerPtr;
	int human_wins, computer_wins, ties;
	unsigned seed = int(time(0));

	RPSGame() : human_wins(0), computer_wins(0), ties(0) { srand(seed); };
	~RPSGame() {};
	void gameplay();

protected:
	bool customStrength();
	bool defaultStrength();
	void computerChoice();
	std::string computerType();

};



#endif