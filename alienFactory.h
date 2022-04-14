#ifndef __ALIENFACTORY__
#define __ALIENFACTORY__

#include <string>
#include "character_example.h"
#include "alientype.h"
#include "Mothership.h"
#include "alien_example.h"

using namespace std;


class AlienFactory
{
  	public:
		Alien* Create(AlienType type)
		{
		
			Alien * item = 0;

			switch(type)
			{
				case Alien1:
					item = new Alien("Alien 1", 5000);
					break;
				case Alien2:
					item = new Alien("Alien 2", 50);
					break;
				case Alien3:
					item = new Alien("Alien 3", 60);
					break;
				case AlienShip:
					item = new Mothership("Mothership!");
					break;
			
			}

			return item;
		}
};


#endif