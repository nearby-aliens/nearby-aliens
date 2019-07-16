//Jessica Barnett and Thomas Honnell
//Summer 2019
//nearbyAliensMain.cpp

using namespace std;

#include "starSystem.h"
int main()
{
  int starChoice = 99;
  chara player;
  player.x=0;
  player.y=0;

  cout << endl << endl << "Welcome to Nearby Aliens. You will search nearby star systems for inteligent life." <<endl <<endl;
  cout << "Begin your journey by choosing a star system." <<endl;
  while(starChoice !=2) //(starChoice<=0 || starChoice >=6)
  {
cout <<endl;
    cout << " Please enter your choice from 1 to 5:  (currently only choice 2 is implemented, choose 2!" <<endl <<endl;
    cout << "   1)Proxima Centauri (4.24 light years)" <<endl;
    cout << "   2)Alpha Centauri binary pair (4.37 light years)"<<endl;
    cout << "   3)Bernard's Star (5.96 light years)" <<endl;
    cout << "   4)Wolf 359 (7.78 light years)" <<endl;
    cout << "   5)Ross 128 (11.03 light years)" <<endl;
    cout << " Enter the number of your choice: " <<endl;
    cin >> starChoice;
    cin.ignore(30, '\n');
    if(starChoice !=2)
    {
      cout << "Currently, only choice two is implemented. Please choose choice 2 to play. (Or go to our github and implement one of the other choices!)" <<endl;
    }
  }
  cout << "You have chosen " << starChoice << ". Good Choice." <<endl;
  cout << "Please make yourself comfortable in the cryo-chamber, and I will wake you when we arrive." <<endl;


  starSystem aStarSystem; //new starSytem object
  // choice 2
  if(starChoice==2)
  {
    aStarSystem.makeSystem(starChoice);

  }

  cout << endl;
  cout << endl;
  cout << "Your cyro-cycle has completed and we have arrived!!" <<endl <<endl;
  aStarSystem.printStarSystem();
  cout <<endl;

  cout << "Practice display" << endl;
  cout << RED << "        w for up" <<endl;
  cout << GREEN << "a for left        d for right" <<endl;
  cout << YELLOW << "       s for down" <<endl;
  cout << CYAN << "*********************************************************************************************************************************************" << endl;
  cout << BLUE << "This is blue" << endl;
  cout << MAGENTA << "This is magenta" << endl << endl << endl;

  cout << RESET << "Bottom of practice display" <<endl;

  cout <<endl;
  char move;
  while(1)
  {
    cout << "input wasd to move";
    cin >> move;
    cin.ignore(30, '\n');
    if(move == 'w'){
      player.y+=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 'a'){
      player.x-=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 's'){
      player.y-=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 'd'){
      player.x+=1;
      player.m=move;
      aStarSystem.move(player);
    }
    aStarSystem.printStarSystem();


  }
  return 0;

}
