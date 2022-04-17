#pragma once
#include <ncurses.h>

class Draw{
    public:
        Draw();
        Draw(int x, int y, chtype ch);
        int getX();
        int getY();
        chtype getShape();
        void drawFigure(int x, int y);
        
    protected:
        int x, y;
        chtype shape;
        char* figure;
    

};