//
// Created by Harrison Latimer on 12/5/17.
//

#include <iostream>
#include "Space.h"
#include "RoomOfPrep.h"
#include <limits>

RoomOfPrep::RoomOfPrep():Space(){
    roomID = 5;

};
void RoomOfPrep::play(std::vector<std::string>*invt){

    int resp;

    if (roomVisited != true){
        std::cout << "The Mage has your shield! Go get it!" << std::endl;
        std::cout << "The Mage said you could have it back if you answer his riddle correctly" << std::endl;
        std::cout << "This thing all things devours:" << std::endl;
        std::cout << "Birds, Beasts, tree, flowers" << std::endl;
        std::cout << "Gnaws iron, bites steel" << std::endl;
        std::cout << "Grinds hard stoes to meal" << std::endl;
        std::cout << "Slays king, ruins town," << std::endl;
        std::cout << "And beats high mountain down" << std::endl;
        std::cout << "Type 1 for time or 2 for water" << std::endl;
        std::cin >> resp;
        while (resp < 1 || resp > 2 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << " Please Enter a number between 1-2 " << std::endl;

            std::cin >> resp;
        }
        if (resp == 1){
            std::cout << "That's right! You get your shield back!" << std::endl;
            invt->push_back("sheild");
            shield = true;
        }
        else
            std::cout <<"Incorrect. Leave and try again..."<< std::endl;



    }
    else if (roomVisited == true && shield == false)
    {
        std::cout << "The Mage has your shield! Go get it!" << std::endl;
        std::cout << "The Mage said you could have it back if you answer his riddle correctly" << std::endl;
        std::cout << "This thing all things devours:" << std::endl;
        std::cout << "Birds, Beasts, tree, flowers" << std::endl;
        std::cout << "Gnaws iron, bites steel" << std::endl;
        std::cout << "Grinds hard stoes to meal" << std::endl;
        std::cout << "Slays king, ruins town," << std::endl;
        std::cout << "And beats high mountain down" << std::endl;
        std::cout << "Type 1 for time or 2 for water" << std::endl;
        std::cin >> resp;
        while (resp < 1 || resp > 2 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << " Please Enter a number between 1-2 " << std::endl;

            std::cin >> resp;
        }
        if (resp == 1){
            std::cout << "That's right! You get your shield back!" << std::endl;
            invt->push_back("shield");
            shield = true;
        }
        else
            std::cout <<"Incorrect. Leave and try again..."<< std::endl;
    }

    else if (roomVisited == true && shield == true)
        std::cout << "The Mage is working on spells..."<<std::endl;
};