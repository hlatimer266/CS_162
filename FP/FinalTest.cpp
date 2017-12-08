//
// Created by Harrison Latimer on 12/5/17.
//

#include <iostream>
#include "Space.h"
#include "FinalTest.h"

FinalTest::FinalTest():Space(){
    roomID = 6;

};
void FinalTest::play(std::vector<std::string>*invt){
    std::cout <<"There's the Orc! Go slay him!" << std::endl;
    if (roomVisited != true) {
        if (invt->size() == 2) {
            std::cout << "Its a tough battle but you beat the Orc!" << std::endl;
            wingame = true;
        } else
            std::cout << "The Orc over powers you " << std::endl;
    }

};