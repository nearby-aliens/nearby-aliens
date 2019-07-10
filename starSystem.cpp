//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSystem.cpp

#include "starSystem.h"
//constructor

starSystem::starSystem()
{
				for (int i=0; i<15 ; ++i)
				{
								for(int j; j<7; ++j)
								{
												systemArray[i][j] = new tile(i, j);
								}
				}
}

void starSystem::printStarSystem()
{
				for (int i=0; i<15 ; ++i)
				{
								for(int j; j<7; ++j)
								{
											systemArray[i][j]->printTile();
											
								}
				}
}

