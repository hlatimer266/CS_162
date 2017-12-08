//
// Created by Harrison Latimer on 12/4/17.
//
#include <iostream>
#include "Space.h"
#include "RealmOfLight.h"
#include <limits>

RealmOfLight::RealmOfLight():Space(){
    roomID = 1;
    setRoomVisited(false);

};
void RealmOfLight::play(std::vector<std::string>*invt){
    int resp;
    int resp2;
    bool swordready = false;
    std::cout << "It's very bright and hot in here..."<<std::endl;

    for (int i = 0; i < invt->size();i++ ) {
        if (invt->at(i) == "sword") {
            swordready = true;
        }
    }

        if (getRoomVisited() == false && swordready == false) {
            std::cout << "There's a Troll hiding behind that mountain of sand and he has your sword!" << std::endl;
            std::cout << "Approach the troll (1 for yes, 2 for no)" << std::endl;
            std::cin >> resp;

            while (resp < 1 || resp > 2 || std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << " Please Enter a number between 1-2 " << std::endl;

                std::cin >> resp;
            }
            if (resp == 1) {
                std::cout << "The Troll says he will give you the sword back if you answer his riddle!" << std::endl;
                std::cout << "What has roots as nobody sees, is taller then trees," << std::endl;
                std::cout << "Up, up it goes" << std::endl;
                std::cout << "and yet never grows" << std::endl;
                std::cout << "Press 1 for The Sky, Press 2 for a Mountain " << std::endl;
                std::cin >> resp;
                while (resp < 1 || resp > 2 || std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                    std::cout << " Please Enter a number between 1-2 " << std::endl;

                    std::cin >> resp;
                }

                if (resp == 2) {
                    std::cout << "That's Correct! The Troll gave back your sword!" << std::endl;
                    invt->push_back("sword");
                } else
                    std::cout << "Incorrect! Leave the room and come back to try again!" << std::endl;
            } else
                std::cout << "Time to move on to a different room" << std::endl;
        } else if (getRoomVisited() == true && swordready == false) {
            std::cout << "There's a Troll hiding behind that mountain of sand and he has your sword!" << std::endl;
            std::cout << "Approach the troll (1 for yes, 2 for no)" << std::endl;
            std::cin >> resp;

            while (resp < 1 || resp > 2 || std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << " Please Enter a number between 1-2 " << std::endl;

                std::cin >> resp;
            }
            std::cout << "The Troll says he will give you the sword back if you answer his riddle!" << std::endl;
            std::cout << "What has roots as nobody sees, is taller then trees," << std::endl;
            std::cout << "Up, up it goes" << std::endl;
            std::cout << "and yet never grows" << std::endl;
            std::cout << "Press 1 for The Sky, Press 2 for a Mountain " << std::endl;
            std::cin >> resp;
            while (resp < 1 || resp > 2 || std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << " Please Enter a number between 1-2 " << std::endl;

                std::cin >> resp;
            }

            if (resp == 2) {
                std::cout << "That's Correct! The Troll gave back your sword!" << std::endl;
                invt->push_back("sword");
            } else
                std::cout << "Incorrect! Leave the room and come back to try again!" << std::endl;
        } else
            std::cout << "Already got the sword, lets leave the troll alone..." << std::endl;

        setRoomVisited(true);
        std::cin.clear();
};
