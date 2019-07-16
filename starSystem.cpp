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
//alpha centauri A is a yellow sun a bit bigger than Sol. 
  systemArray[0][10]->fillSunTile('r', 'y'); //A
  systemArray[0][9]->fillSunTile('r', 'y'); //A
  systemArray[0][8]->fillSunTile('r', 'y'); //A
  systemArray[0][7]->fillSunTile('r', 'y'); //A
  systemArray[1][10]->fillSunTile('r', 'y'); //A
  systemArray[1][9]->fillSunTile('r', 'y'); //A
  systemArray[1][8]->fillSunTile('r', 'y'); //A
  systemArray[2][10]->fillSunTile('r', 'y'); //A
  systemArray[2][9]->fillSunTile('r', 'y'); //A
  
//alpha centauri B is organge a bit smaller than Sol.
  systemArray[0][4]->fillSunTile('y', 'r'); //B yellow on red
  systemArray[0][3]->fillSunTile('y', 'r'); //B yellow on red
  systemArray[0][2]->fillSunTile('y', 'r'); //B yellow on red
  systemArray[0][1]->fillSunTile('y', 'r'); //B yellow on red
  systemArray[1][3]->fillSunTile('y', 'r'); //B yellow on red
  systemArray[1][2]->fillSunTile('y', 'r'); //B yellow on red

//make planets. alpha centauri has no confirmed planets. 
//wikipedia cites a source that estimates at 75% that terrestrial planets are there
//with artistic license we put some here :)
  systemArray[7][2]->fillPlanet(5,2,'g', 'c'); // green on cyan small close in planet
  systemArray[13][5]->fillPlanet(5,2,'b','m'); // blue on magenta small 2nd closest in planet
  systemArray[17][10]->fillPlanet(5,2,'b','m'); // blue on magenta small 3rd
  systemArray[24][1]->fillPlanet(5,2,'b','m'); // blue on magenta small 4th closest in planet
  systemArray[29][7]->fillPlanet(5,2,'b','m'); // blue on magenta small 5th closest in planet
//eventually 3 small planets, 1 large and 2 medium size
}



