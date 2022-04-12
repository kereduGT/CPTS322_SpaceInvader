#pragma once
#include <ncurses.h>
#include "draw.hpp"

class Board{
    public:
        Board();
        Board(int height, int width);
        void initialize();
        void clear();
        void refresh();
        chtype getInput();        
        void addBorder();
        void getEmptyCoo(int &x, int &y);
        void add(Draw draw);
        void addAt(int x, int y, chtype ch);
        void remove(Draw Draw);
    private:
        WINDOW *board_win;
        int height, width;

        void construct(int height, int width);
};