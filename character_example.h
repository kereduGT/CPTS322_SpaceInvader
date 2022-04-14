#ifndef _CHARACTER_
#define _CHARACTER_

#include <string>

using namespace std; 

class Character{
    protected:
        string m_name;
    
    public: 
        Character(string name){
            m_name = name;
        }

        string getName(){
            return m_name;
        }
};
#endif


