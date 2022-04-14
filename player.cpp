#include <ncurses.h>
#include "player.hpp"

Player::Player(){
    this->x = 0;
    this->y = 0;
    this->shape = '^';
    cur_action = right;
}
Player::Player(int x, int y){
    this->x = x;
    this->y = y;
    this->shape = '^';
    cur_action = right;
}
void Player::setXY(int x, int y){
    this->x = this->x+x;
    this->y = y; 
}
action Player::getAction(){
    return cur_action;
}

void Player::setAction(action d){
    cur_action = d;
}
void Player::setShape(chtype x){
    this->shape = x;
}