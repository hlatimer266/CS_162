//
// Created by Harrison Latimer on 11/27/17.
//

#ifndef SHADOWROOM_H
#define SHADOWROOM_H

#include "Space.h"

class ShadowRoom: public Space {

public:
    ShadowRoom();
    void play(std::vector<std::string>*invt);
    bool spiderdead = false;


};
#endif
