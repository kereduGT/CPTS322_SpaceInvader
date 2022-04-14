#include <ncurses.h>
#include <time.h>
#include <stdlib.h>
#include "draw.hpp"
#include "board.hpp"
#include "gameplay.hpp"

using namespace std; 

#define BOARD_DIM 20
#define BOARD_ROWS BOARD_DIM
#define BOARD_COL BOARD_DIM * 2.5

class Menu{
    private:
        Board board;
        bool isMenuOver;
        Gameplay gameplay;


    public:
        Menu();
        Menu(int height, int width);
        void initialize();
        void redraw();
        void getMenu();
        void getChoice();
        void getInputTutorial();
        void displayTutorial();
        bool isOver();
        int centerText(WINDOW *win, int start_row, string text);
        void newGame();
    

};