#include <iostream>
#include <ncurses.h>
#include "draw.hpp"

using namespace std;

Draw::Draw(){
    x = y = 0;
}
Draw::Draw(int x, int y, chtype ch){
    this->x = x;
    this->y = y;
    this->shape = ch;
}
int Draw::getX(){
    return x;
}
int Draw::getY(){
    return y;
}
chtype Draw::getShape(){
    return shape;
}

void Draw::drawFigure(int x, int y){
    
}