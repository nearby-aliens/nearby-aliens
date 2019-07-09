//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSystem.cpp

#include "ptTwoAu.h"
//constructor
starSystem::starSystem()
{
				numColumns =15; //x-index column index
				numRows =7;  //y-index row index
				for (int i=0; i<numColumns ; ++i)
				{
								systemArray[i] = ptTwoAu* [numRows];
								for(int j; j<numColumns; ++j)
								{
												systemArray[i][j] = new ptTwoAu;
								}
				}
}

