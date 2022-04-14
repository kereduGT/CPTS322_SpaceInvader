#include <ncurses.h>
#include "enemy.hpp"

Enemy::Enemy(){
    this->x = 0;
    this->y = 0;
    this->lives = 0;
    this->shape = 'W';
}

Enemy::Enemy(int x, int y){
    this->x = x;
    this->y = y;
    this->lives = 1;
    this->shape = 'W';
}