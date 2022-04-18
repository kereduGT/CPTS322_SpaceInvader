#ifndef _ENEMYFACTORY_
#define _ENEMYFACTORY_

#include <string>
#include "draw.hpp"
#include "enemy.hpp"
#include "enemyType.hpp"

using namespace std;

class EnemyFactory{
    public:
        Enemy* Create(EnemyType type){
            Enemy * item = 0;

            switch(type){
                case Enemy1:
                    item = new Enemy(1,1, 100);
                    break;
                case Enemy2:
                    item = new Enemy(2,2, 80);
                    break;
                case Enemy3:
                    item = new Enemy(3,3, 70);
                    break;
                case EnemyShip:
                    item = new Enemy(4,4, 110);
                    break;
            }

            return item;
        }
};

#endif