/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/26/2017
 * Description: Implementation file for Menu class
 **************************************************************/

#include "Menu.h"
#include "randBuff.h"
#include "pallindrome.h"
#include <iostream>
#include <limits>
#include <queue>

Menu::Menu(){};
void Menu::game(){
    std::queue<int> q1;
    std::queue<int> temp;
    std::string playOrQuit = "p";
    double totals = 0;
    int k;
    while (playOrQuit != "q") {


        int rounds,perBack, perFront,userNum;

        std::cout <<"Hello to Buffer / Pallindrom simulator !" << std::endl;
        std::cout <<"Select 1 for the buffer simulator or 2 for Pallindrom simulator"<<std::endl;
        std::cin>>userNum;
        checkNum(&userNum);

        if (userNum == 1) {
            std::cout << "How many rounds would you like to simulate?" << std::endl;
            std::cin >> rounds;
            checkNum2(&rounds);
            std::cout << "Please enter chance to add a number to the front of the buffer (1-100)?" << std::endl;
            std::cin >> perFront;
            checkNum2(&perFront);
            std::cout << "Please enter chance to remove a number at the back of the buffer (1-100)" << std::endl;
            std::cin >> perBack;
            checkNum2(&perBack);

            for (int i = 0; i < rounds; i++) {
                randBuff(q1, perFront, perBack);
                k++;
            }

            temp = q1;

            while (!temp.empty()) {
                std::cout << temp.front() << std::endl;
                temp.pop();
            }
            std::cout << "Size of buffer: " << q1.size() << std::endl;

            totals += q1.size();
            std::cout << "Average size of buffer (and all others) = " << (totals / (k + 1)*100) << std::endl;
        }
        else if (userNum == 2) {
            std::cin.clear();
            std::cin.ignore();
            pallindrome();
        }

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
            } else if (!isalpha(playOrQuit.at(0))) {
                valid_3 = false;
                std::cin.clear();
                std::cout << "Please enter a either p or q  " << std::endl;
                std::cin >> playOrQuit;
            } else {
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

void Menu::checkNum(int* resp) {

    //input validation for character menu

    while (*resp < 1 || *resp > 2 ||std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << " Please Enter a valid number(1 or 2) " << std::endl;

        std::cin >> *resp;
    }

}

void Menu::checkNum2(int* resp) {

    //input validation for character menu

    while (*resp < 1 || *resp > 100 ||std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        std::cout << " Please Enter a valid number(1-100) " << std::endl;

        std::cin >> *resp;
    }

}
Menu::~Menu(){};