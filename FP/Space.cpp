#include "Space.h"

Space::Space(){}

void Space::setRight(Space *r){

    right = r;

};
void Space::setLeft(Space *l){

    left = l;
};
void Space::setBottom(Space*b){
    bottom = b;
};
void Space::setTop(Space*t){
    top = t;
};

 int Space::getRoomID(){return roomID;};

void Space::setRoomVisited(bool t) {roomVisited = t;}

bool Space::getRoomVisited() {return roomVisited;}

Space::~Space(){
	delete top;
	delete left;
	delete right;
	delete bottom;
	
}
