//
// Created by Harrison Latimer on 12/5/17.
//

#ifndef FINALTEST_H
#define FINALTEST_H

#include "Space.h"
#include <vector>
class FinalTest: public Space{

public:
    FinalTest();
    void play(std::vector<std::string>*invt);
    bool wingame = false;
    bool getWingame(){return wingame;};

};

#endif //FINALPROJECT_FINALTEST_H
