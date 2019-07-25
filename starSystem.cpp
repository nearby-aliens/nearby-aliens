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

void starSystem::playLevel()
{
  chara player;
  bool orbitCheck = 0; //1 for true -ship is in orbit
  char input = 'z';  //variable for players choice input

  player.fuel=20;//had to add here since new player is made

  //this while loop is the whole level. One function called -calls the orbit sub-menu
  while(input != 'e')  
  {
    if(player.fuel<=0){
      cout<<"fuel ran out game over\n";
      break;
    }

    cout<<"this is the amount of fuel owned\n";
    cout<<player.fuel;

    int x = player.x;
    int y = player.y;
    printStarSystem();  //print map first so  all messages show below map
    if (systemArray[x][y]->whatIsHere = 'o')
      orbitCheck = 1;
    if(orbitCheck) //if in orbit, call orbit menu
    {
      

    } 
    if(input=='w' || input=='a' || input =='s'|| input == 'd') 
      remove(player);
    cout << "Please input your choice to move (wasd) or 'e' to exit." <<endl;
    cin >> input;
    cin.ignore(30, '\n');
    cerr << "input is " << input <<endl;
    if(input  == 'w'){
      if(player.y>=HEIGHT-1)
        cout<<"You are at the top of the display and can not go higher!\n";
      else
        player.y+=1;
      player.m=input;
      move(player);
    }
    if(input == 'a'){
      if(player.x<=0)
        cout<<"You are very near the star and at the far left edge of your display. Yon can not go any more to the left!\n";
      else
        player.x-=1;
      player.m=input;
      move(player);
    }
    if(input == 's'){
      if(player.y<=0)
        cout<<"You are at the bottom of the display. You can not go lower!\n";
      else
        player.y-=1;
      player.m=input;
      move(player);
    }
    if(input == 'd'){
      if(player.x>=WIDTH-1)
        cout<<"You are out at the far edge of the star system. You can not go any more to the right!\n";
      else
        player.x+=1;
      player.m=input;
      move(player);
    }
    //fuel
    if(input == 'w'|| input == 'a' || input  == 's'||input == 'd')
      player.fuel = player.fuel-1;

  }//end of while loop - if input is 'e' exit while loop back to main menu
}

void starSystem::move(chara player)
{
  systemArray[player.x][player.y]->move();
}

void starSystem::remove(chara player)
{
  systemArray[player.x][player.y]->remove();
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

  cout << RED << "        w for up" <<endl;
  cout << GREEN << "a for left        d for right" <<endl;
  cout << YELLOW << "       s for down" <<endl;
  cout << CYAN << "`**********************************************************************************************************" << endl;
  cout << RESET << endl;

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
  markOrbitTiles(7, 2, 'p'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[13][5]->fillPlanet(5,2,'b','m'); // blue on magenta small 2nd closest in planet
  markOrbitTiles(13, 5, 'p'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[17][10]->fillPlanet(5,2,'b','m'); // blue on magenta small 3rd
  markOrbitTiles(17, 10, 'p'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[24][1]->fillPlanet(5,2,'b','m'); // blue on magenta small 4th closest in planet
  markOrbitTiles(24,1, 'p'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[29][7]->fillPlanet(5,2,'b','m'); // blue on magenta small 5th closest in planet
  markOrbitTiles(29, 7, 'p'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
}

//this is a function of the starSystem class that marks spaces adjacent to the added planet
void starSystem::markOrbitTiles(int x, int y, char planetCode)
{
  if(x>0)
    systemArray[x-1][y]->whatIsHere = 'o';
  if(y>0)
    systemArray[x][y-1]->whatIsHere = 'o';
  if(x<WIDTH-1)
    systemArray[x+1][y]->whatIsHere = 'o';
  if(y<HEIGHT-1)
    systemArray[x][y+1]->whatIsHere = 'o';

}

