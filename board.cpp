#include <iostream>
#include <ncurses.h>
#include "board.hpp"

using namespace std;

Board::Board(){
    construct(0,0);
}
Board::Board(int height, int width){
    construct(height, width);
}
void Board::initialize(){
    clear();
    refresh();
}
void Board::clear(){
    wclear(board_win);
}
void Board::refresh(){
    wrefresh(board_win);
}
chtype Board::getInput(){
    return wgetch(board_win);
}
void Board::addBorder(){
    box(board_win, 0, 0);
}
void Board::addTitleBoarder(){
    whline(board_win, '*', 20);
}
void Board::getEmptyCoo(int &y, int &x){
        while((mvwinch(board_win, y = rand() % height, x = rand() % width)) != ' ');
}
void Board::add(Draw Draw){
            addAt(Draw.getY(),Draw.getX(), Draw.getShape());
}
void Board::addAt(int x, int y, chtype ch){
    mvwaddch(board_win, x, y, ch);
}

void Board::construct(int height, int width){
    int x_Max, y_Max;
    this->height = height;
    this->width = width; 
    getmaxyx(stdscr,y_Max,x_Max);
    
    board_win = newwin(height,width,(y_Max/2) - (height/2),
    (x_Max/2)- (width/2));

    wtimeout(board_win, 10000);

    keypad(board_win, true);
}

