//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSystem.cpp

#include "starSystem.h"
#include "orbit_functions.h"
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

int starSystem::playLevel(chara & player)
{
  bool orbitCheck = 0; //1 for true -ship is in orbit
  char input = 'z';  //variable for players choice input

  //player.fuel=20;//had to add here since new player is made 


  //this while loop is the whole level. One function called -calls the orbit sub-menu
  while(input != 'e')  
  {
    clearScreen();
    int x = player.x;
    int y = player.y;
    printStarSystem();  //print map first so  all messages show below map
    if (systemArray[x][y]->whatIsHere == 'o') 
      orbitCheck = 1;
    if(orbitCheck) //if in orbit, call orbit menu
    {
      int retval = orbitMenu(systemArray[x][y]->lifeType, systemArray[x][y]->whatIsHere, systemArray[x][y]->planetCode);
      return retval;
    } 

    cout<<"Fuel Gauge: " <<player.fuel << " units of fuel remaining." <<endl;

    if(input=='w' || input=='a' || input =='s'|| input == 'd') 
      remove(player);
    cout << "Please input your choice to move (wasd) or 'e' to exit." <<endl;
    cin >> input;
    cin.ignore(30, '\n');
    if(input == 'w'){
      if(player.y>=HEIGHT)
        cout<<"You are very near the top of the display. you cannot go higher!\n";
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
    if(input == 'w'|| input == 'a' || input  == 's'||input == 'd')
      player.fuel = player.fuel-1;


    if(player.fuel<=0){
      cout<<"fuel ran out game over\n";
      input = 'e';
    }

  }//end of while loop - if input is 'e' exit while loop back to main menu
  return 1;
}

int starSystem::orbitMenu(char lifeType,  char whatIsHere, char planetCode)   
  //win=1 blowup=2 getfuel=3 visitNoResult=4 gainEnergyFromMining=5 leaveOrbit=6
{
  int menuChoice = 0;
  int broadcast=1;
  int message_recieved=1;
  int decoded=1;
  message_inbox inbox;
  while (menuChoice != 6)
  {
   do 
    {

    cout << "You are now in orbit of a planet!. What would you like to do now?" << endl;  //TODO use string class to output planets name from planet code
      cout<< "  1) Visit planet." <<endl;
      cout<< "  2) Send probe to mine." <<endl;
      cout<< "  3) Listen for message." <<endl;
      cout<< "  4) Broadcase message." <<endl;
      cout<< "  5) Decode message by playing a mini game." <<endl;
      cout<< "  6) Leave orbit." <<endl;
      cin>>menuChoice;
      cin.ignore(100, '\n');
    }while (menuChoice <= 0 || menuChoice > 6);
    if(menuChoice == 1)
    {

      if (lifeType != 'I') 
      {
        cout<< "You visit the planet. There is no inteligent life here." <<endl;
      }
      else 
      {
	if(inbox.gift_exchange(planetCode, decoded))
          {
        cout << "You have successfully communicated with these sentient beings and brought an appropriate gift" << endl;
        cout << "You created a wonderful opportunity for humanity! YOU WIN!!!!" << endl;
	  }
	else{
          cout<<"you failed to communicated with gift exchange. you lose";
        }
        return 1;
      }
    }
    if (menuChoice == 2)
    {
      if (lifeType != 'I') 
      {
        cout<< " There is no inteligent life here. You are free to send a probe to mine material for energy" <<endl;
        char inhabited='n';
        int communicated=1;
        int fuel=probe_mine_fuel(planetCode, communicated, inhabited);
	//RETURN FUEL? otherwise need another pass by reference
	return fuel;
        cout<< "You send a probe.  There is no inteligent life here." <<endl;
      }
      else 
      {
	if(inbox.gift_exchange(planetCode, decoded))
	  {
        cout << "You have successfully communicated with these sentient beings and brought an appropriate gift" << endl;
        cout << "You created a wonderful opportunity for humanity! YOU WIN!!!!" << endl;
        char inhabited='y';
        int communicated=0;
        int fuel=probe_mine_fuel(planetCode, communicated, inhabited);
	//return or what with fuel?
	return fuel;
      }
	else{
	  cout<<"you failed to communicated with gift exchange. you lose";
	}
      }
    }
 if (menuChoice == 3)
 {
   if(lifeType == 'I')
     message_recieved=inbox.message_inbox_listen(lifeType, broadcast);
   else
     cout<<"There is no message response";
 }
 if (menuChoice == 4)
 {
   broadcast=inbox.broadcast();
 }
 if (menuChoice == 5)
 {
   if(lifeType == 'I')
     decoded=inbox.decode_message(planetCode, message_recieved);
   else
     cout<<"you have no message";
 }

  }
  return 1;
}



void starSystem::clearScreen()
{
  cout <<"\033[H\033[2J\033[3J" << endl;
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
  systemArray[7][2]->fillPlanet(5,2,'g', 'c', 'a', 'N' ); // green on cyan small close in planet, planet code a, lifeType None
  markOrbitTiles(7, 2, 'a', 'N'); //this is a function of the starSystem class that marks spaces adjacent to the added planet - inputs: x, y, and a,b,c,d,e planetCode,  LifeType
  systemArray[13][5]->fillPlanet(5,2,'b','m', 'b', 'I'); // blue on magenta small 2nd closest in planet
  markOrbitTiles(13, 5, 'b', 'I'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[17][10]->fillPlanet(5,2,'b','m', 'c', 'I'); // blue on magenta small 3rd
  markOrbitTiles(17, 10, 'c', 'I'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[24][1]->fillPlanet(5,2,'b','m', 'd', 'I'); // blue on magenta small 4th closest in planet
  markOrbitTiles(24,1, 'd', 'I'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
  systemArray[29][7]->fillPlanet(5,2,'b','m', 'e', 'N'); // blue on magenta small 5th closest in planet
  markOrbitTiles(29, 7, 'e', 'N'); //this is a function of the starSystem class that marks spaces adjacent to the added planet
}

//this is a function of the starSystem class that marks spaces adjacent to the added planet
void starSystem::markOrbitTiles(int x, int y, char whichPlanet, char life)
{
  if(x>0)
  {
    systemArray[x-1][y]->whatIsHere = 'o';
    systemArray[x-1][y]->planetCode = whichPlanet;
    systemArray[x-1][y]->lifeType = life;
  }
  if(y>0)
  {
    systemArray[x][y-1]->whatIsHere = 'o';
    systemArray[x][y-1]->planetCode = whichPlanet;
    systemArray[x][y-1]->lifeType = life;
  }
  if(x<WIDTH-1)
  {
    systemArray[x+1][y]->whatIsHere = 'o';
    systemArray[x+1][y]->planetCode = whichPlanet;
    systemArray[x+1][y]->lifeType = life;
  }
  if(y<HEIGHT-1)
  {
    systemArray[x][y+1]->whatIsHere = 'o';
    systemArray[x][y+1]->planetCode = whichPlanet;;
    systemArray[x][y+1]->lifeType = life;
  }
}

