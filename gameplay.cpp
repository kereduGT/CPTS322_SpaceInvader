#include <time.h>
#include <stdlib.h>
#include "gameplay.hpp"

Gameplay::Gameplay(){
    gameOver = false;
}

Gameplay::Gameplay(int height, int width){
    board = Board(height, width);
    
    initialize();

}
Gameplay::~Gameplay(){
    
}
void Gameplay::initialize(){
    board.initialize();
    gameOver = false;
    enemy.drawFigure(10,10);
    player.setXY(5, 19);
    enemy.setXY(1,10);
    enemy.setShape('0');
    //board.add(player);

    
    board.add(enemy);

    board.addBorder();
    board.addTitleBoarder();

    
    
    

    player.setAction(right);
   // srand(time(NULL));

}
void Gameplay::getInput(){
    chtype input = board.getInput();

    switch (input)
    {
    case KEY_LEFT:
    case 'a':
        player.setAction(left);
        player.setXY(-1,18);

        break;
    case KEY_RIGHT:
    case 'd':
        player.setAction(right);
        player.setXY(1,18);
        break;
    //case KEY_UP:
    case ' ':
        player.setAction(shoot);
        break;
    
    default:
        break;
    }
}
void Gameplay::updatePlayer(){
    board.clear();
    board.addBorder();
    board.addTitleBoarder();

    board.add(player); 
    board.add(enemy);  

}
void Gameplay::redraw(){
    
    board.refresh();
}
bool Gameplay::isOver(){
    return gameOver;
}

void Gameplay::createFloat(){
    enemy.setXY(1,5);
    board.add(enemy);

    enemy.drawFigure(10,10);
   

}