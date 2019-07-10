//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSystem.cpp

#include "starSystem.h"
//constructor

starSystem::starSystem()
{
				for (int i=0; i<30 ; ++i)
				{
								for(int j=0; j<11; ++j)
								{
												systemArray[i][j] = new tile(i, j);
								}
				}
}

void starSystem::printStarSystem()
{
				for(int j=10; j>-1; --j)
				{
								for (int i=0; i<30 ; ++i)
								{
												(systemArray[i][j])->displayTop();
								}
												cout << endl;
								for (int i=0; i<30 ; ++i)
								{
												(systemArray[i][j])->displayBottom();
								}
												cout << endl;
								
				}
}

