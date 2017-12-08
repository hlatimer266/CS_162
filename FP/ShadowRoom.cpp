#include "ShadowRoom.h"
#include "Space.h"
#include "Entrance.h"
#include <iostream>


ShadowRoom::ShadowRoom():Space(){

     roomID = 3;
    bool spiderdead = false;
}

void ShadowRoom::play(std::vector<std::string>*invt){


    bool swordready = false;


    for (int i = 0; i < invt->size();i++ ) {
        if (invt->at(i) == "sword"){
            swordready = true;
        }
    }
    std::cout << "Its very dark in here"<<std::endl;

    if (getRoomVisited() != true ) {
        std::cout << "There's a giant spider! He's coming your way!" << std::endl;

        if (swordready == true) {
            std::cout << "You have a sword! Slash him!" << std::endl;
            std::cout << "What a strike! You've killed the spider!" << std::endl;
            std::cout << "Time to get out of here!" << std::endl;
            spiderdead = true;
        }
        else
            std::cout << "Run for your life!" << std::endl;

    }
    else if (getRoomVisited() == true && spiderdead == true)
        std::cout << "Looks like that spider is still dead..good"<<std::endl;
    else if (getRoomVisited() == true && swordready == false)
        std::cout << "That spider is still here! Run!" << std::endl;



    setRoomVisited(true);

};

