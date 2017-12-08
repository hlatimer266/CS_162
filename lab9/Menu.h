/**************************************************************
 * * Author: Harrison Latimer
 * * Date: 11/26/2017
 * Description: Header file for Menu class
 **************************************************************/

#ifndef MENU_H
#define MENU_H

class Menu {
public:
    Menu();
    void game();
    void checkNum2(int* resp2);
    void checkNum(int* resp);
    ~Menu();
};

#endif //BUFFER_MENU_H
