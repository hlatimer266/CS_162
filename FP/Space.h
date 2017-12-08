//
// Created by Harrison Latimer on 11/27/17.
//

#ifndef SPACE_H
#define SPACE_H
#include<string>
#include <vector>

class Space {
protected:


public:

    Space *top;
    Space *bottom;
    Space *left;
    Space *right;
    int roomID = 0;
    bool roomVisited = false;
    bool wingame = false;

    Space();
    virtual void play(std::vector<std::string>*invt){};
    virtual void setRight(Space* r);
    virtual void setLeft(Space* l );
    virtual void setBottom(Space* b);
    virtual void setTop(Space *t);
    virtual void setRoomVisited(bool t);
    virtual bool getWingame(){return wingame;};

    virtual int getRoomID();
    virtual bool getRoomVisited();
    ~Space();

};


#endif
