#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ncurses.h>
#include <string>
#include "board.hpp"
#include "menu.hpp"

using namespace std;

#define BOARD_DIM 20
#define BOARD_ROWS BOARD_DIM
#define BOARD_COL BOARD_DIM * 2.5

int main(int argc, char **argv){
    initscr();
    refresh();
    noecho();
    curs_set(0);

    Menu mainMenu(BOARD_ROWS, BOARD_COL);


    while(!mainMenu.isOver()){
        mainMenu.initialize();
        mainMenu.getMenu();
        
        mainMenu.getChoice();
         
    }


	endwin();

	return 0;
}