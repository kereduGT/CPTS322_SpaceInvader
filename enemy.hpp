#pragma once 
#include <ncurses.h>
#include "draw.hpp"

enum action{
    left, right, shoot
};

class Enemy: public Draw{
    action cur_action;
    int lives;

    public: 
        Enemy();
        Enemy(int x, int y);
        void setXY(int x, int y);
        action getAction();
        void setAction(action d);
        void setShape(chtype x);
};