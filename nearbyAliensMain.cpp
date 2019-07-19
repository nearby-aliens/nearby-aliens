//Jessica Barnett and Thomas Honnell
//Summer 2019
//nearbyAliensMain.cpp

using namespace std;

#include "starSystem.h"
int main()
{
  int starChoice = 8;

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
      if(starChoice !=2 && starChoice !=9)
      {
        cout << "Currently, only choice two is implemented. Please choose choice 2 to play. (Or go to our github and implement one of the other choices!)" <<endl;
      }
    }
    cout << "You have chosen " << starChoice << ". Good Choice." <<endl;
    cout << "Please make yourself comfortable in the cryo-chamber, and I will wake you when we arrive." <<endl;


    if(starChoice == 9)
    {
      cout << GREEN << "You have returned home to Sol and Earth!" << RESET<<endl;
      cout << GREEN << "Thanks for playing." << RESET << endl << endl << endl;
      return 0;
    } 
    starSystem aStarSystem; //new starSytem object
    // choice 2
    if(starChoice==2)
    {
      aStarSystem.makeSystem(starChoice);
      cout << endl;
      cout << endl;
      cout<<CYAN << "Your cyro-cycle has completed and we have arrived!!"<<RESET <<endl <<endl;
      aStarSystem.printStarSystem();
      aStarSystem.playLevel();
    }
    if (starChoice !=9) starChoice=8; //tempfix so will give user another choice 
    //here if starChoice is 9, it will not do the while loop anymore and the game will end
  }
  cout <<endl;
  cout << "Thanks for playing!" <<endl;
  cout <<endl<<endl<<endl;
  return 0;
}
