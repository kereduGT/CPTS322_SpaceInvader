#ifndef _ALIEN_
#define _ALIEN_

#include <string>
#include "character_example.h"

using namespace std;

class Alien : public Character{
    int m_points;

    public:
        virtual ~Alien(){

        }
        Alien(string name, int points) : Character(name){
            m_points = points;
        }
        virtual int getPoints(){
            return m_points;
        }
};
#endif

