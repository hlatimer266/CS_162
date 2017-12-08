



#ifndef ANT_HPP
#define ANT_HPP 

#include <iostream>
#include <string>

using namespace std; 

class Ant{
    
    private:
        int xpos;
        int ypos;
        int prevXpos;
        int prevYpos;
        char direction;
        
    public: 
        
		Ant(int x, int y, char dir);
        
		void setDirection(char antdirection);


			int getX();


			int getY();


			void setX(int x);


			void setY(int y);
        
        void setPrevXpos(int xp);
        
		void setPrevYpos(int yp);

			char getAntDirection();


			int getPrevX();

			int getPrevY();
        
        
};




#endif
