//Jessica Barnett and Thomas Honnell
//Summer 2019
//nearbyAliensMain.cpp

using namespace std;

#include "starSystem.h"
int main()
{
  int starChoice = 99;

  cout << "Welcome to Nearby Aliens. You will search nearby star systems for inteligent life." <<endl <<endl;
  cout << "Begin your journey by choosing a star system." <<endl;
  while(starChoice !=2 && starChoice !=3) //(starChoice<=0 || starChoice >=6)
  {
    cout << "Please enter your choice from 1 to 5" <<endl;
    cout << "	1)Proxima Centauri (4.24 light years)"<<endl;
    cout << " 2)Alpha Centauri binary pair (4.37 light years)"<<endl;
    cout << " 3)Bernard's Star (5.96 light years)" <<endl;
    cout << " 4)Wolf 359 (7.78 light years)" <<endl;
    cout << " 5)Ross 128 (11.03 light years)" <<endl;
    cout << "Enter the number of your choice: " <<endl;
    cin >> starChoice;
    cin.ignore(30, '\n');
    if(starChoice !=2)
    {
      cout << "Currently, only choice two is implemented. Please choose choice 2 to play. (Or go to our github and implement one of the other choices!)" <<endl;
    }
    cout << "You have chosen " << starChoice << ". Good Choice." <<endl;
    cout << "Please make yourself comfortable in the cryo-chamber, and I will wake you when we arrive." <<endl;
  }

    starSystem aStarSystem; //new starSytem object
  // choice 2
  if(starChoice==2)
  {
    aStarSystem.makeSystem(starChoice);

  }

  cout << "This prints the whole 30x11 system"<<endl;
  aStarSystem.printStarSystem();
  cout <<endl;

  cout << "Now let's test colors!" << endl;
  cout << RED << "This is red" <<endl;
  cout << GREEN << "This is green" <<endl;
  cout << YELLOW << "This is yellow" <<endl;
cout << CYAN << "This is cyan" << endl;
  cout << YELLOWonRED << "This is yellow on red" <<RESET<< endl;
  cout << REDonYELLOW << "This is red on yellow. When using 'onColor' include <<RESET<< in the same cout statement before endl;" <<RESET << endl;
  cout << RESET << "Now back to default white on black" <<endl;
  return 0;

}

