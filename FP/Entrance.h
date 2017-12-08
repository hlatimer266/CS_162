//
// Created by Harrison Latimer on 11/27/17.
//

#ifndef ENTRANCE_H
#define ENTRANCE_H
#include "Space.h"
#include <vector>

class Entrance: public Space {

public:
    Entrance();
    void play(std::vector<std::string>*invt);
    int getLeft();


};
#endif //ENTRANCE_H
