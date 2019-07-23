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
  player.fuel=20;

  cout << endl << endl << BLUE <<"Welcome to Nearby Aliens. You will search nearby star systems for inteligent life." <<endl <<endl;
  cout << MAGENTA << "Begin your journey by choosing a star system." <<endl;
  while(starChoice !=2) //(starChoice<=0 || starChoice >=6)
  {
cout <<endl;
    cout <<BLUE<< " Please enter your choice from 1 to 5:  (currently only choice 2 is implemented, choose 2!" <<endl <<endl;
    cout <<CYAN<< "   1)Proxima Centauri (4.24 light years)" <<endl;
    cout << "   2)Alpha Centauri binary pair (4.37 light years)"<<endl;
    cout << "   3)Bernard's Star (5.96 light years)" <<endl;
    cout << "   4)Wolf 359 (7.78 light years)" <<endl;
    cout << "   5)Ross 128 (11.03 light years)" <<endl;
    cout <<BLUE<< " Enter the number of your choice: " << RESET <<endl;
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
  cout<<CYAN << "Your cyro-cycle has completed and we have arrived!!" <<endl <<endl;
  aStarSystem.printStarSystem();
  cout <<endl;

cout << RESET << endl;
  cout <<endl;
  char move;
  while(1)
  {
    //fuel handling
    if(player.fuel<=0){
      cout<<"ran out of fuel";
      break;
    }
    cout << "input wasd to move";
    cout << " fuel "<<player.fuel;
    cin >> move;
    cin.ignore(30, '\n');
    if(move == 'w'){
      if(player.y>=HEIGHT)
	cout<<"cant go that high\n";
      else
	player.y+=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 'a'){
      if(player.x<=0)
	 cout<<"cant go that left\n";
      else
	player.x-=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 's'){
      if(player.y<=0)
         cout<<"cant go that low\n";
      else
	player.y-=1;
      player.m=move;
      aStarSystem.move(player);
    }
    if(move == 'd'){
      if(player.y>=WIDTH)
        cout<<"cant go that right\n";
      else
	player.x+=1;
      player.m=move;
      aStarSystem.move(player);
    }
    aStarSystem.printStarSystem();

    //fuel
    player.fuel=player.fuel-1;


  }
  return 0;

}
