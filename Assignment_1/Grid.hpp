

#ifndef GRID_HPP
#define GRID_HPP 

#include <iostream>
#include <string>
#include "Ant.hpp"

class Grid{
    
    private:
            int num_Rows, num_Cols;
            string **bArray;
            Ant *bug;
            string BLACK = "#", WHITE = "_", ANT = "&";
    public:
        Grid(int sizeX, int sizeY, int antX, int antY, char direct);
       
         
		void printGrid();
            
        void moveAnt();

		void freeMem();

};

#endif
