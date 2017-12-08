//
// Created by Harrison Latimer on 12/4/17.
//

#ifndef MENU_H
#define MENU_H
#include "Space.h"
#include "Entrance.h"
#include "ShadowRoom.h"
#include "RealmOfLight.h"
#include "TrialOfTears.h"
#include "RoomOfPrep.h"
#include "FinalTest.h"

class Menu {
private:
    Space* Player = nullptr;
    Space *room_one = new Entrance;
    Space *room_two = new ShadowRoom;
    Space *room_three = new RealmOfLight;
    Space *room_four = new TrialOfTears;
    Space *room_five = new RoomOfPrep;
    Space *room_six = new FinalTest;

    std::vector<std::string>inventory;

    int resp;
    int health;
    bool result;
    void CheckNum(int *resp);
    void nextMove();

public:
    Menu();
    void game();
    ~Menu();


};

#endif //FINALPROJECT_MENU_H
