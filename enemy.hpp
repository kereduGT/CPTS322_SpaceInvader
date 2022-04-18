#pragma once 
#include <ncurses.h>
#include "draw.hpp"

enum action{
    left, right, shoot
};

class Enemy: public Draw{
    action cur_action;
    int lives;
    int points;

    public: 
        Enemy();
        Enemy(int x, int y, int points);
        void setXY(int x, int y);
        action getAction();
        void setAction(action d);
        void setShape(chtype x);
        
};