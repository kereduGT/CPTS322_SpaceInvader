#include <iostream>
#include "menu.hpp"
#include <ncurses.h>


using namespace std;
Menu::Menu(){
    
}

Menu::Menu(int height, int width){
    board = Board(height, width);
    initialize();
    
}

void Menu::initialize(){
    board.initialize();
    isMenuOver = false;
    
    

}

void Menu::redraw(){
    board.addBorder();
    board.refresh();
}



void Menu::getMenu(){
    if(!has_colors()){
        printw("Terminal does not support colors");        
    }
    

    

    int y_Max, x_Max;
    getmaxyx(stdscr, y_Max, x_Max);    
    WINDOW *menuInter = newwin(y_Max/2, x_Max/2, y_Max/4, x_Max/4);

 

    

    string text1 = " ___  __   __   ___  ___    _ _  _ _  _  __   __   ___  __   ___ ";
    string text2 = "[__  |__] |__| |    |__     | |\\ | |  | |__| |  \\ |__  |__/ [__  ";
    string text3 = "___] |    |  | |___ |___    | | \\|  \\/  |  | |__/ |___ |  \\ ___]";
    string text4 = "                                                     Version 1.0";
    
    string text6 = "                                                Press q for help";
    string text7 = "HIGH  SCORES";
    string text8 = "AAA      999";
    string text5 = "NEW GAME"; 

    use_default_colors();
   // assume_default_colors();
    start_color();
    init_pair(1, COLOR_BLUE, -1);
    init_pair(2, COLOR_YELLOW, -1);
    init_pair(3, COLOR_CYAN, -1);

    wattron(menuInter, A_BOLD);
    wattron(menuInter, COLOR_PAIR(1));
    mvwprintw(menuInter, 1, centerText(menuInter, 1, text1), text1.c_str());
    mvwprintw(menuInter, 2, centerText(menuInter, 1, text2), text2.c_str());
    mvwprintw(menuInter, 3, centerText(menuInter, 1, text3), text3.c_str());
    wattroff(menuInter, COLOR_PAIR(1));

    
    wattron(menuInter, COLOR_PAIR(2));
    mvwprintw(menuInter, 4, centerText(menuInter, 1, text4), text4.c_str());
    wattroff(menuInter, COLOR_PAIR(2));

    mvwprintw(menuInter, 6, centerText(menuInter, 8, text7), text7.c_str());
    mvwprintw(menuInter, 7, centerText(menuInter, 8, text8), text8.c_str());
    mvwprintw(menuInter, 8, centerText(menuInter, 8, text8), text8.c_str());
    mvwprintw(menuInter, 9, centerText(menuInter, 8, text8), text8.c_str());
     
    wattron(menuInter, COLOR_PAIR(3));
    
    mvwprintw(menuInter, 11, centerText(menuInter, 5, text5), text5.c_str());
    wattroff(menuInter, COLOR_PAIR(3));

    wattroff(menuInter, A_BOLD);

    mvwprintw(menuInter, 13, centerText(menuInter, 6, text6), text6.c_str());

    
    
   
    wgetch(menuInter);
    //board.refresh();
}

void Menu::displayTutorial(){
    
    board.clear();
    
    
    int y_Max, x_Max;
    getmaxyx(stdscr, y_Max, x_Max);    
    WINDOW *menuInter = newwin(y_Max/2, x_Max/2, y_Max/4, x_Max/4);
    
    string text1 = "move left        press 'a'"; 
    string text2 = "Move right       press 'b'";
    string text3 = "Shoot            press 'spacebar'";
    string text4 = "return           press 'r'";
    string text5 = "quit             press 'q'";
   

    centerText(menuInter, 1, text1);

    mvwprintw(menuInter, 1, centerText(menuInter, 1, text1), text1.c_str());
    mvwprintw(menuInter, 2, centerText(menuInter, 1, text1), text2.c_str());
    mvwprintw(menuInter, 3, centerText(menuInter, 1, text1), text3.c_str());
    mvwprintw(menuInter, 4, centerText(menuInter, 1, text1), text4.c_str());
    mvwprintw(menuInter, 5, centerText(menuInter, 1, text1), text5.c_str());
      

    
    wgetch(menuInter);
    board.refresh();

    getInputTutorial();







}

void Menu::getChoice(){
    chtype input = board.getInput();
    switch(input){
        case 'q':
        displayTutorial();
        
        break;
        case ' ':
        newGame();

        

        break;


    }
}

void Menu::getInputTutorial(){

    chtype input = board.getInput();
    switch(input){
        case 'q':
        getMenu();
        break;

        case 'r':    
        
        break;


    }
}

bool Menu::isOver(){
    return isMenuOver;
}

int Menu::centerText(WINDOW *win, int start_row, string text){
    int center_col = win->_maxx / 2;
    int half_l = text.length() / 2;
    int adjust_col = center_col - half_l;

    return adjust_col;

}

void Menu::newGame(){
    int y_Max, x_Max;
    getmaxyx(stdscr, y_Max, x_Max);
    WINDOW *menuInter = newwin(y_Max/2, x_Max/2, y_Max/4, x_Max/4);

    Gameplay gameplay (BOARD_ROWS,BOARD_COL );

    board.clear();
    //gameplay.createFloat();

    while(!gameplay.isOver()){
        gameplay.getInput();
        gameplay.updatePlayer();
        
        gameplay.redraw();
        
    }
}