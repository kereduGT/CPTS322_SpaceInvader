#pragma once
#include <ncurses.h>
#include "board.hpp"
#include "draw.hpp"
#include "player.hpp"

class Gameplay{
    private:
        Board board;
        bool gameOver;
        Player player;
        Player enemy;
    
    public:
        Gameplay();
        Gameplay(int height, int width);
        ~Gameplay();
        void initialize();
        void getInput();
        void redraw();
        bool isOver();
        void updatePlayer();
        void createFloat();
};