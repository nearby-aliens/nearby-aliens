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

void starSystem::move(chara p)
{  
  systemArray[p.x][p.y].move();
  if(p.m=='w')
    systemArray[p.x][p.y+1].remove();
  if(p.m=='a')
    systemArray[p.x-1][p.y].remove();
  if(p.m=='s')
    systemArray[p.x][p.y-1].remove();
  if(p.m=='d')
    systemArray[p.x+1][p.y].remove();
  if((systemArray[p.x][p.y+1].gethere()=='P' || systemArray[p.x][p.y+1].gethere()=='1' || systemArray[p.x][p.y+1].gethere()=='2' || systemArray[p.x][p.y+1].gethere()=='3' || systemArray[p.x][p.y+1].gethere()=='4') || (systemArray[p.x-1][p.y].gethere()=='P' || systemArray[p.x-1][p.y].gethere()=='1' || systemArray[p.x-1][p.y].gethere()=='2' || systemArray[p.x-1][p.y].gethere()=='3' || systemArray[p.x-1][p.y].gethere()=='4') || (systemArray[p.x][p.y-1].gethere()=='P' || systemArray[p.x][p.y-1].gethere()=='1' || systemArray[p.x][p.y-1].gethere()=='2' || systemArray[p.x][p.y-1].gethere()=='3' || systemArray[p.x][p.y-1].gethere()=='4') || (systemArray[p.x+1][p.y].gethere()=='P' || systemArray[p.x+1][p.y].gethere()=='1' || systemArray[p.x+1][p.y].gethere()=='2' || systemArray[p.x+1][p.y].gethere()=='3' || systemArray[p.x+1][p.y].gethere()=='4'){
      cout << "This is the menu for possible orbital first contact. your options are:";
      cout << "\n";
      cout << "1. visit planet.\n";
      cout << "2. send message.\n";
      cout << "3. recieve message.\n";
      cout << "4. send probe.\n";
      cout << "input 1 2 3 or 4 for your options\n";
      char temp;
      cin >> temp;
      cin.ignore(30, '\n');
      //placeholder for more
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

void starSystem::addPlanet(int i, int j)
{
  systemArray[i][j]->fillPlanet(i, j);
}
