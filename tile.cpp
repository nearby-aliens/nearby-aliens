//Jessica Barnett and Thomas Honnell
//Summer 2019
//tile.cpp

#include "starSystem.h"

using namespace std;

tile::tile() //constuctor
{

				whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun
				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				topRCenter='3';
				tRightEdge=' ';
				bottomLeft='5';
				shipSpace='_'; // default _ or Q for ship
				bottomRCenter='7';
				bRightEdge=' ';

}


tile::tile(int i, int j) //constuctor
{
xLocation = i;
yLocation = j;
				whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun
				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				topRCenter='3';
				tRightEdge='_';
				bottomLeft='5';
				shipSpace='_'; // default _ or Q for ship
				bottomRCenter='7';
				bRightEdge=' ';

}

void tile::displayTop()
{
				cout << whatIsHere << lifeType << topRCenter << tRightEdge;
}


void tile::displayBottom()
{
				cout << bottomLeft << shipSpace << bottomRCenter << bRightEdge;
}

void tile::testDisplay2by3()
{
				for(int i=0; i<=1; ++i)
				{
								for(int j=0; j<=2; ++j)
												
								{
												displayTop();
								}
								cout <<endl;
								for(int j=0; j<=2; ++j)
								{
												displayBottom();
								}
								cout<<endl;
				}
}

void tile::printTile()
{
				displayTop();
				cout <<endl;
				displayBottom();
				cout <<endl;
}
