

#ifndef GRID_HPP
#define GRID_HPP 

#include <iostream>
#include <string>
#include "ANT.HPP"

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

};

#endif
