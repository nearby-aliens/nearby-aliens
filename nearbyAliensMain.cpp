//Jessica Barnett and Thomas Honnell
//Summer 2019
//nearbyAliensMain.cpp

using namespace std;

#include "starSystem.h"
#include "minigames.h"
#include "orbit_functions.h"
int main()
{
  int starChoice = 8;
  int retVal;
  chara player;
  player.x=0;
  player.y=0;
  player.fuel=20;

  
  //TESTING MINIGAME IGNORE
  //char test[] = {'h','e','l','l','o'};
  //bool result=hangman(test);

  //TESTING FOR ORBIT FUNCTIONS
  //message_inbox inbox;
  //char planetCode='1';
  //int result1=inbox.message_inbox_listen(planetCode);
  //cout<<result1;
  //int result2=inbox.decode_message(planetCode, result1);
  //cout<<result2;
  //int result3=inbox.gift_exchange(planetCode, result2);
  //cout<<result3;


  cout << endl << endl << BLUE <<"Welcome to Nearby Aliens. You will search nearby star systems for inteligent life." <<endl <<endl;
  while(starChoice != 9)
  {
    cout << MAGENTA << "Begin your journey by choosing a star system." <<endl;
    while(starChoice !=2  && starChoice != 9) //(starChoice<=0 || starChoice >=6)
    {
      cout <<endl;
      cout <<BLUE<< " Please enter your choice from 1 to 5:  (currently only choice 2 is implemented, choose 2!" <<endl <<endl;
      cout <<CYAN<< "   1)Proxima Centauri (4.24 light years)" <<endl;
      cout << "   2)Alpha Centauri binary pair (4.37 light years)"<<endl;
      cout << "   3)Bernard's Star (5.96 light years)" <<endl;
      cout << "   4)Wolf 359 (7.78 light years)" <<endl;
      cout << "   5)Ross 128 (11.03 light years)" <<endl;
      cout << "   9)To end the game and return to sol and earth! :)" <<endl;
      cout <<BLUE<< " Enter the number of your choice: " << RESET <<endl;
      cin >> starChoice;
      cin.ignore(30, '\n');
      if(starChoice !=2 )
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
      cout << endl;
      cout << endl;
      cout<<CYAN << "Your cyro-cycle has completed and we have arrived!!"<<RESET <<endl <<endl;
      aStarSystem.printStarSystem();
      retVal = aStarSystem.playLevel();
      starChoice=8;  //resets starSystem variable value, so will enter main menu after exiting level
    }
    //here if starChoice is 9, it will not do the while loop anymore and the game will end
  }
  cout <<endl;
  
      cout << GREEN << "You have returned home to Sol and Earth!" << RESET<<endl;
      cout << GREEN << "Thanks for playing." << RESET << endl << endl << endl;

cout << RESET << endl;
  cout <<endl;
  return 0;
}
