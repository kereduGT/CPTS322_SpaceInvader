#pragma once
#include <ncurses.h>

class Draw{
    public:
        Draw();
        Draw(int x, int y, chtype ch);
        int getX();
        int getY();
        chtype getShape();
    
    protected:
        int x, y;
        chtype shape;

};