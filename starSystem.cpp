//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSystem.cpp

#include "starSystem.h"
//constructor

//initialize array. i columns are across the screen starting with 0 on the left
// j rows are on the side with 0 starting at the bottom
// when displaying - display top down. top row must be output first
// (0,0) is the left bottom corner.
starSystem::starSystem()//initialize array. i columns are across the screen starting with 0 on the left
{
  for (int i=0; i<30 ; ++i)
  {
    for(int j=0; j<11; ++j)
    {
      systemArray[i][j] = new tile(i, j);
    }
  }
}


//starSystems display uses displayTop to print the whole top line of all tiles
// being displayed (starting at top so j index starts at 10 and is decremented)
void starSystem::printStarSystem()
{
  for(int j=10; j>-1; --j)   //must input top row first so j starts at 10
  {
    for (int i=0; i<30 ; ++i) //each tile of the j row is printed- all i coloumns are printed for each
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

//this function takes an integer that represents which star system is being created
//and calls the appropriate function to make the ASCII art for that system
void starSystem::makeSystem(int level)
{
  if(level == 2) 
  {
    makeAlphaCentauriSystem();
  }
}

void starSystem::makeAlphaCentauriSystem()
{
//make Suns - binary suns for alpha Centauri

//make planets
  systemArray[5][6]->fillPlanet(5,2,'y','r'); // yellow on red small close in planet
  systemArray[7][2]->fillPlanet(5,2,'c','g'); // cyan on green small close in planet
  systemArray[13][5]->fillPlanet(5,2,'b','m'); // blue on magenta small 3rd closest in planet
}



