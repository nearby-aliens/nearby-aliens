  //Jessica Barnett and Thomas Honnell
//Summer 2019
//tile.cpp

#include "starSystem.h"

using namespace std;

tile::tile() //constuctor
{

				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun
				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun

        topLeft = ' ';
				topLCenter = ' ';	
				topRCenter='3';
				tRightEdge=' ';
				bottomLeft=' ';
				shipSpace='_'; // default _ or Q for ship
				bottomRCenter='7';
				bRightEdge=' ';

}


tile::tile(int i, int j) //constuctor
{
				xLocation = i;
				yLocation = j;
				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun


				topLeft = ' ';
				topLCenter = ' ';	
				topRCenter=' ';
				tRightEdge=' ';
				bottomLeft=' ';
				shipSpace='_'; // default _ or Q for ship
				bottomRCenter=' ';
				bRightEdge=' ';
}


/*
void tile::makeSmallPlanet(int i, int j)
{
				xLocation = i;
				yLocation = j;
				lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
				whatIsHere = ' '; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun

				topLeft =' ';
				topLCenter = '@';	
				topRCenter='@';
				tRightEdge=' ';
				bottomLeft=' ';
				shipSpace='@'; // default _ or Q for ship
				bottomRCenter='@';
				bRightEdge=' ';
}
*/ 

void tile::displayTop()
{
				cout << topLeft << topLCenter << topRCenter << tRightEdge;
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
