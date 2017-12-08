//
// Created by Harrison Latimer on 12/5/17.
//

#ifndef ROOMOFPREP_H
#define ROOMOFPREP_H

#include "Space.h"
class RoomOfPrep: public Space{

public:
    RoomOfPrep();
    void play(std::vector<std::string>*invt);
    bool shield = false;

};

#endif //FINALPROJECT_ROOMOFPREP_H
