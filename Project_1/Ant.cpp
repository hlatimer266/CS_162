

#include <iostream>
#include <string>
#include "ANT.HPP"
using namespace std; 


        
        Ant::Ant(int x, int y, char dir){
            setX(x);
            setY(y);
            setDirection(dir);
        }
        
        void Ant::setDirection(char antdirection)
        {
            direction = antdirection;
        }
            
        int Ant::getX()
        {
            return xpos;
        }
            
        int Ant::getY()
        {
            return ypos;
        }
        
        void Ant::setX(int x)
        {
            xpos = x;
        }
    
        void Ant::setY(int y){
            ypos = y;
        }
        
        void Ant::setPrevXpos(int xp){
            prevXpos = xp;
            
        }
        
        void Ant::setPrevYpos(int yp){
            prevYpos = yp;
            
        }
        
        char Ant::getAntDirection()
        {
            return direction;
		};
        
           int Ant::getPrevX()
        {
            return  prevXpos;    
		   };
        int Ant::getPrevY()
        {
            return prevYpos;
		};
        
