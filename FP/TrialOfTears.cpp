//
// Created by Harrison Latimer on 12/4/17.
//

#include <iostream>
#include "Space.h"
#include "TrialOfTears.h"
#include <limits>

TrialOfTears::TrialOfTears():Space(){
    roomID = 4;

};
void TrialOfTears::play(std::vector<std::string>*invt){


    int resp;


    if (roomVisited != true){
        std::cout << "There's an old women blocking your path" << std::endl;
        std::cout << "She says she needs help hunting for dinner" << std::endl;
        std::cout << "Press 1 to help, Press 2 to leave " << std::endl;
        std::cin >> resp;
        while (resp < 1 || resp > 2 || std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << " Please Enter a number between 1-2 " << std::endl;

            std::cin >> resp;
        }
        if (resp == 1) {
            std::cout << "The old lady was very grateful for the help" << std::endl;
            std::cout << "She feeds you some dinner!" << std::endl;
            std::cout << "She tells you in the next room there is a Mage with a riddle" << std::endl;
            std::cout << "She tells you a hint to the answer: its something she is running out of!" << std::endl;
            helpOldLady = true;
            setRoomVisited(true);
        }
        else {
            std::cout << "The old lady is angry at you. Best be moving on..." << std::endl;
            setRoomVisited(true);
        }
    }
    else if (roomVisited == true && helpOldLady == true)
        std::cout << "You wave at the old lady. Thanks for the help!"<<std::endl;
    else
        std::cout << "The old lady looks at you with a cold stare..."<<std::endl;




};