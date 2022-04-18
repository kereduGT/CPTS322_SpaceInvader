#include <ncurses.h>
#include "enemy.hpp"

Enemy::Enemy(){
    this->x = 0;
    this->y = 0;
    this->lives = 0;
    this->shape = 'W';
    this->points = 0;
}

Enemy::Enemy(int x, int y, int points){
    this->x = x;
    this->y = y;
    this->lives = 1;
    this->shape = 'W';
    this->points = points;
}