#pragma once 
#include <ncurses.h>
#include "draw.hpp"
#include <queue>

enum action{
    left, right, shoot
};

class Player: public Draw{
    action cur_action;

    public: 
        Player();
        Player(int x, int y);
        void setXY(int x, int y);
        action getAction();
        void setAction(action d);
        void setShape(chtype x);
};