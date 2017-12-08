/*********************************************************************
** Class Name: RPSGame
** Date: 10/30/17
** Description: Implementation file for the RPSGame class. Contains all 
** the function definitions needed for the class
*********************************************************************/


#include "RPSGame.hpp"

/***************************************************************
** gameplay function: function used to play the rock, paper, scissors
** game. When called from main on a RPSGame object it starts
** the game.
***************************************************************/
void RPSGame::gameplay()
{
	char yOrN;
	bool keepPlaying;
	int winner;

	yOrN = charMenu("Do you want to choose different strengths for the tools ? (y - yes, n - no)", true, true, "Welcome to Rock, Paper, Scissors!");

	do {
		if (yOrN == 'y')
		{
			keepPlaying = customStrength();	//Ask whether the user would like to keep playing and set custom strength
		}									//for user's choice of tool
		else
		{
			keepPlaying = defaultStrength();//Ask whether the user would like to keep playing and set default strength
		}									//for user's choice of tool
		if (keepPlaying == true)
		{
			computerChoice();
			cout << "Computer chose " << computerType() << endl;		//Output computers choice of tool
			winner = humanPtr->fight(computerPtr);
			if (winner > 0)
			{
				cout << endl << "You win!" << endl;
				human_wins += 1;
			} 
			else if (winner < 0) 
			{
				cout << endl << "Computer wins!" << endl;
				computer_wins += 1;
			} 
			else
			{
				cout << endl << "Tie!" << endl;
				ties += 1;
			}
			cout << endl << "Human wins: " << human_wins << endl;			//Display scores
			cout << endl << "Computer wins: " << computer_wins << endl;
			cout << endl << "Ties: " << ties << endl;

			delete humanPtr;						//Delete DA memory
			delete computerPtr;		
		}


	} while (keepPlaying);
	

}

/***************************************************************
** computerType function: When called returns the type of tool 
** the computer chose as a string
***************************************************************/

std::string RPSGame::computerType()
{
	if (computerPtr->getType() == 'p') { return "Paper"; }
	if (computerPtr->getType() == 'r') { return "Rock"; }
	if (computerPtr->getType() == 's') { return "Scissors"; }
	return "Type not found";
}

/***************************************************************
** computerChoice function: when called creates new derived class
** memory for the human tool* with default or custom values depending
** on what the human chose.
***************************************************************/

void RPSGame::computerChoice()
{
	int compStr = rand() % (humanPtr->getStrength() * 2 + 5) + 1; //Set random strength variable to a number between 
	int compTool = rand() % 3 + 1;								  //1 and twice the human strength plus 5
	if (compTool == 1) 
	{ 
		if (humanPtr->getStrength() == 1)
		{
			computerPtr = new Rock();
		}
		else
		{
			computerPtr = new Rock(compStr);
		}
	}
	if (compTool == 2)
	{
		if (humanPtr->getStrength() == 1)
		{
			computerPtr = new Paper();
		}
		else
		{
			computerPtr = new Paper(compStr);
		}
	}
	if (compTool == 3)
	{
		if (humanPtr->getStrength() == 1)
		{
			computerPtr = new Scissors();
		}
		else
		{
			computerPtr = new Scissors(compStr);
		}
	}

}

/***************************************************************
** customStrength function: when called creates new derived class
** memory for the human tool* with custom values
***************************************************************/

bool RPSGame::customStrength()
{
	char toolChoice;
	int strengthIn;
	toolChoice = charMenu("Choose your tool (r-rock, p-paper, s-scissor, e-exit)");
	if (toolChoice == 'e') { return false; }
	else
	{
		strengthIn = intMenu("What strength would you like? (1-50)", false, 50, 1);
		if (toolChoice == 'r') { humanPtr = new Rock(strengthIn); }
		if (toolChoice == 'p') { humanPtr = new Paper(strengthIn); }
		if (toolChoice == 's') { humanPtr = new Scissors(strengthIn); }
		return true;	
	}
}

/***************************************************************
** defaultStrength function: when called creates new derived class
** memory for the human tool* with default values
***************************************************************/

bool RPSGame::defaultStrength()
{
	char toolChoice;
	toolChoice = charMenu("Choose your tool (r-rock, p-paper, s-scissor, e-exit)");
	if (toolChoice == 'e') { return false; }
	if (toolChoice == 'r') { humanPtr = new Rock(); }
	if (toolChoice == 'p') { humanPtr = new Paper(); }
	if (toolChoice == 's') { humanPtr = new Scissors(); }
	return true;
}
