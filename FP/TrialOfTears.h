//
// Created by Harrison Latimer on 12/4/17.
//

#ifndef TRIALOFTEARS_H
#define TRIALOFTEARS_H

#include "Space.h"
class TrialOfTears: public Space{

public:
TrialOfTears();
void play(std::vector<std::string>*invt);
    bool helpOldLady = false;
};

#endif //FINALPROJECT_TRIALOFTEARS_H
