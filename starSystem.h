//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSytem.h
#include "tile.h"

class starSystem
{
				public:
								starSystem(); //constructor
//								void addPlanet();
								void printStarSystem();
				private:
								tile* systemArray[30][15];
};
