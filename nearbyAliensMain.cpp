//Jessica Barnett and Thomas Honnell
//Summer 2019
//nearbyAliensMain.cpp

using namespace std;

#include "starSystem.h"
int main()
{

				int starChoice;

				cout << "Welcome to Nearby Aliens. You will search nearby star systems for inteligent life." <<endl <<endl;
				cout << "Begin your journey by choosing a star system." <<endl;
				cout << "	1)Proxima Centauri (4.24 light years)"<<endl;
				cout << " 2)Alpha Centauri binary pair (4.37 light years)"<<endl;
				cout << " 3)Bernard's Star (5.96 light years)" <<endl;
				cout << " 4)Wolf 359 (7.78 light years)" <<endl;
				cout << " 5)Ross 128 (11.03 light years)" <<endl;
				cout << "Enter the number of your choice: " <<endl;
				cin >> starChoice;
				cin.ignore(30, '\n');
				cout << "You have chosen " << starChoice << ". Good Choice.  Please enter the cryo-chamber, and I will wake you when we arrive." <<endl;

				starSystem aStarSystem; //new starSytem object
				aStarSystem.printStarSystem();`
cout <<endl;
				return 0;
}

