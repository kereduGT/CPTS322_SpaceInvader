#ifndef _MOTHERSHIPALIEN_
#define _MOTHERSHIPALIEN_

#include <string> 
#include "character_example.h"
#include "alien_example.h"

using namespace std;

#define CONST_SIZE 4

class Mothership : public Alien{
    int m_allPoints[CONST_SIZE];
    int m_i;

    public:
        ~Mothership(){

        }

        Mothership(string name) : Alien(name, 0){
            m_i = 0;
            m_allPoints[0] = 10;
            m_allPoints[1] = 20;
            m_allPoints[2] = 150;
            m_allPoints[3] = 300;
        }

        int getPoints() override{
            m_i = (m_i + 1) % CONST_SIZE;
            return m_allPoints[m_i];
        }
};
#endif

