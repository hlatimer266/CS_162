
#include<iostream>
#include<string>

#include "GRID.hpp"
#include "Ant.hpp"


Grid::Grid(int sizeX, int sizeY, int antX, int antY, char direct) {


	bug = new Ant(antX, antY, direct);

	num_Rows = sizeX;
	num_Cols = sizeY;


	bArray = new string*[num_Rows]; //here too

	for (int i = 0; i<num_Rows; ++i)
		bArray[i] = new string[num_Rows];


	for (int i = 0; i < num_Rows; i++)
		for (int j = 0; j < num_Cols; j++)
			bArray[i][j] = WHITE;



	//bug = c;
	//bArray[bug.xpos][bug.ypos] = '*';    
};


void Grid::printGrid() {
	for (int i = 0; i < num_Rows; i++) {
		for (int j = 0; j < num_Rows; j++) {

			if (i == bug->getX() && j == bug->getY()) {
				cout << ANT;
			}
			else
				cout << bArray[i][j];
		}
		cout << endl;
	}

	cout << "-------------------------------" << endl;
}

void Grid::moveAnt() {


	if (bArray[bug->getX()][bug->getY()] == WHITE)
	{
		if (bug->getAntDirection() == 'n') {


			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setDirection('e'); // change direction


			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			CurrXpos--;

			if (CurrXpos < 0)
				CurrXpos = num_Rows - 1;


			bArray[bug->getPrevX()][bug->getPrevY()] = BLACK;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);

		}

		else if (bug->getAntDirection() == 'e') {
			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			bug->setDirection('s'); // change direction

			bArray[bug->getPrevX()][bug->getPrevY()] = BLACK;

			CurrYpos++;
			if (CurrYpos > num_Cols - 1)
				CurrYpos = 0;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);



		}


		else if (bug->getAntDirection() == 's') {

			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object


			bug->setDirection('w'); // change direction
			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			CurrXpos++;
			if (CurrXpos > num_Rows - 1)
				CurrXpos = 0;

			bArray[bug->getPrevX()][bug->getPrevY()] = BLACK;

			bug->setX(CurrXpos);
			bug->setY(CurrYpos);


		}

		else if (bug->getAntDirection() == 'w') {

			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			bug->setDirection('n');

			CurrYpos--;
			if (CurrYpos < 0)
				CurrYpos = num_Cols - 1;

			bArray[bug->getPrevX()][bug->getPrevY()] = BLACK;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);



		}

	}



	else { //black space


		if (bug->getAntDirection() == 'n')
		{
			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			bug->setDirection('w'); // change direction


			CurrYpos--;
			if (CurrYpos < 0)
				CurrYpos = num_Cols - 1;

			/* CurrXpos--;

			if(CurrXpos < 0)
			CurrXpos = num_Rows - 1;
			*/

			bArray[bug->getPrevX()][bug->getPrevY()] = WHITE;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);
		}

		else if (bug->getAntDirection() == 'w')
		{
			int CurrXpos, CurrYpos;


			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setDirection('s'); // change direction

			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);


			CurrXpos++;
			if (CurrXpos > num_Rows - 1)
				CurrXpos = 0;

			/* CurrYpos--;
			if (CurrYpos < 0)
			CurrYpos == num_Cols - 1;
			*/

			bArray[bug->getPrevX()][bug->getPrevY()] = WHITE;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);
		}

		else if (bug->getAntDirection() == 's')
		{
			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object

			bug->setDirection('e'); // change direction

			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);


			CurrYpos++;
			if (CurrYpos > num_Cols - 1)
				CurrYpos = 0;

			/*CurrXpos++;
			if (CurrXpos > num_Rows -1)
			CurrXpos = 0;
			*/


			bArray[bug->getPrevX()][bug->getPrevY()] = WHITE;


			bug->setX(CurrXpos);
			bug->setY(CurrYpos);
		}

		else if (bug->getAntDirection() == 'e')
		{
			int CurrXpos, CurrYpos;

			CurrXpos = bug->getX();//store previous x index value of ant class object
			CurrYpos = bug->getY();//store previous y index value of ant class object


			bug->setDirection('n'); // change direction
			bug->setPrevXpos(CurrXpos); //store the previous values in the ant class
			bug->setPrevYpos(CurrYpos);

			CurrXpos--;

			if (CurrXpos < 0)
				CurrXpos = num_Rows - 1;

			/*CurrYpos++;
			if (CurrYpos > num_Cols-1)
			CurrYpos = 0;
			*/

			bArray[bug->getPrevX()][bug->getPrevY()] = WHITE;

			bug->setX(CurrXpos);
			bug->setY(CurrYpos);

		}


	}



}




