//
// Created by Harrison Latimer on 12/4/17.
//
#include "Space.h"
#include "Entrance.h"
#include "ShadowRoom.h"
#include "RealmOfLight.h"
#include "TrialOfTears.h"
#include "Menu.h"
#include <iostream>
#include <limits>

Menu::Menu(){};

void Menu::game(){

    std::string playOrQuit = "p";
    while (playOrQuit != "q") {

     std::cout << "Welcome to the Dungeon of Trails!" << std::endl;
     std::cout << "You must retrieve your sword and shield to fight the Orc and win the game!" <<std::endl;
     std::cout << "Your items are scattered inside the Dungeon, get them back from the thieves!" <<std::endl;
     std::cout << "There are 6 rooms and you have 9 steps in order to win the game" <<std::endl;
     std::cout << "If you fail to get the items from the room, step out, and try again" << std::endl;
     std::cout << "but remember you only have 9 steps in order to win!" << std::endl;
     std::cout << " " << std::endl;

    //Entrance
    room_one->setRight(room_two);
    room_one->setLeft(room_three);
    room_one->setTop(NULL);
    room_one->setBottom(NULL);
    room_one->setRoomVisited(false);

    //Shadow Room
    room_two->setRight(NULL);
    room_two->setLeft(room_one);
    room_two->setTop(NULL);
    room_two->setBottom(NULL);
    room_two->setRoomVisited(false);

    //Realm Of Light
    room_three->setRight(room_one);
    room_three->setTop(room_four);
    room_three->setLeft(NULL);
    room_three->setBottom(NULL);
    room_three->setRoomVisited(false);

    //Trial of Tears
    room_four->setRight(room_five);
    room_four->setBottom(room_three);
    room_four->setLeft(NULL);
    room_four->setTop(NULL);
    room_four->setRoomVisited(false);

    //Room of Prep
    room_five->setRight(room_six);
    room_five->setLeft(room_four);
    room_five->setTop(NULL);
    room_five->setBottom(NULL);
    room_five->setRoomVisited(false);

    //Final Test
    room_six->setLeft(room_five);
    room_six->setRight(NULL);
    room_six->setBottom(NULL);
    room_six->setTop(NULL);
    room_six->setRoomVisited(false);

    //set player in the Entrance
    Player = room_one;
    health = 6;
    result = false;
    inventory.clear();
    Player->play(&inventory);

    while (health > 0 && !Player->getWingame()) {

        if (health <= 0) {
            std::cout << "You've run out of health! Game over!" << std::endl;
            break;
        }

        nextMove();
        std::cout << " " << std::endl;

        //Entrance Selections
        if (resp == 1 && Player->getRoomID() == 2) {
            Player = room_one->left;
            Player->play(&inventory);
        } else if (resp == 2 && Player->getRoomID() == 2) {
            Player = room_one->right;
            Player->play(&inventory);
        } else if ((resp == 3 || resp == 4) && Player->getRoomID() == 2) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;

        }

            //Shadow Room Seletions
        else if (resp == 1 && Player->getRoomID() == 3) {
            Player = room_two->left;
            Player->play(&inventory);
        }
        else if ((resp == 2 || resp == 3 || resp == 4) && Player->getRoomID() == 2) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;

        }

            //Realm of light
        else if ((resp == 1 || resp == 4) && Player->getRoomID() == 1) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;

        }
        else if (resp == 2 && Player->getRoomID() == 1) {
            Player = room_three->right;
            Player->play(&inventory);
        }
        else if (resp == 3 && Player->getRoomID() == 1) {
            Player = room_three->top;
            Player->play(&inventory);
        }

        //Trial of Tears
        else if (resp == 4 && Player->getRoomID() == 4){
            Player = room_four->bottom;
            Player->play(&inventory);

        }
        else if (resp == 2 && Player->getRoomID() == 4){
            Player = room_four->right;
            Player->play(&inventory);

        }
        else if ((resp == 1 || resp == 3) && Player->getRoomID() == 4) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;

        }

        //Room of Prep
        else if (resp == 1 && Player->getRoomID() == 5){
            Player = room_five->left;
            Player->play(&inventory);
        }
        else if (resp == 2 && Player->getRoomID() == 5){
            Player = room_five->right;
            Player->play(&inventory);
        }
        else if ((resp == 3 || resp == 4) && Player->getRoomID() == 5) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;
        }

        //Final Test
        else if (resp == 1 && Player->getRoomID() == 6){
            Player = room_six->left;
            Player->play(&inventory);
        }
        else if ((resp == 2 || resp == 3 || resp == 4) && Player->getRoomID() == 6) {
            std::cout << "It appears you can't go this way. Turn around!" << std::endl;

        }
        std::cin.clear();
        health--;
    }

    if (Player->getWingame() == true)
        std::cout << "Looks like you won the game!" << std::endl;
    else{
        std::cout <<"You've run out of health"<<std::endl;
        std::cout <<"Better luck next time!" << std::endl;
    }


        //prompt user to play again or quit
        std::cin.clear();
        std::cout << "Plase type p to play again or q to quit" << std::endl;
        std::cin >> playOrQuit;
        bool valid_3 = false;

        while (valid_3 == false) {
            std::cin.clear();
            if (playOrQuit.length() > 1) {
                valid_3 = false;
                std::cin.clear();
                std::cout << "Please enter a either p or q " << std::endl;
                std::cin >> playOrQuit;
            }
            else if (!isalpha(playOrQuit.at(0))) {
                valid_3 = false;
                std::cin.clear();
                std::cout << "Please enter a either p or q  " << std::endl;
                std::cin >> playOrQuit;
            }
            else
            {
                char c = tolower(playOrQuit.at(0));
                if (c == 'p' || c == 'q')
                    valid_3 = true;
                else {
                    valid_3 = false;
                    std::cin.clear();
                    std::cout << "Please enter a either p or q  " << std::endl;
                    std::cin >> playOrQuit;
                }
            }
        }


    }
};

Menu::~Menu(){


    delete Player;


    delete room_one;


    delete room_two;


    delete room_three;


    delete room_four;


    delete room_five;


    delete room_six;


    std::vector<std::string>().swap(inventory);
    inventory.clear();


};

void Menu::CheckNum(int *resp){
    while (*resp < 1 || *resp > 5 || std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << " Please Enter a number between 1-5 " << std::endl;

        std::cin >> *resp;
    }
};

void Menu::nextMove(){

    if (Player->getRoomID() == 2){
        std::cout << "You are in the Entrance" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout << inventory.at(i) << std::endl;
        }
        std::cout << "Enter 1 for left into the Realm of Light" << std::endl;
        std::cout << "Enter 2 for right to go into the Shadow Room" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);

    }
    else if (Player->getRoomID() == 3){
        std::cout << "You are in the Shadow Room" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout << inventory.at(i) <<std::endl;
        }
        std::cout << "Enter 1 for left to go back to the Entrance" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);
    }
    else if (Player->getRoomID() == 1){
        std::cout << "You are in the Realm of Light" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout << inventory.at(i)<< std::endl;
        }
        std::cout << "Enter 3 to go top into the Trial of Tears" << std::endl;
        std::cout << "Enter 2 to go right back into the Entrance" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);
    }
    else if (Player->getRoomID() == 4){
        std::cout << "You are in the Trial Of Tears" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout << inventory.at(i) << std::endl;
        }
        std::cout << "Enter 4 to go bottom into the Realm Of Light" << std::endl;
        std::cout << "Enter 2 to go right back into the Room Of Preparation" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);
    }
    else if (Player->getRoomID() == 5){
        std::cout << "You are in the Room of Preparation" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout << inventory.at(i) << std::endl;
        }
        std::cout << "Enter 1 to go left into the Trial of Tears" << std::endl;
        std::cout << "Enter 2 to go right back into the Final Test" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);
    }
    else if (Player->getRoomID() == 6){
        std::cout << "You are in the Final Test" << std::endl;
        if (inventory.size() > 0) {
            std::cout << "Current Inventory: ";
            for (int i = 0; i < inventory.size(); i++)
                std::cout<<inventory.at(i)<<std::endl;
        }
        std::cout << "Enter 1 to go left into the Room of Preparatrion" << std::endl;
        std::cin >> resp;
        CheckNum(&resp);
    }

};


