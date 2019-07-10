//Jessica Barnett and Thomas Honnell
//Summer 2019
//tile.cpp

#include "starSystem.h"

using namespace std;

tile::tile() //constuctor
{

				topLeft = '.';
				topLCenter='2';
				topRCenter='3';
				topRight='4';
				bottomLeft='5';
				bottomLCenter='6';
				bottomRCenter='7';
				bottomRight='8';

}


tile::tile(int i, int j) //constuctor
{
xLocation = i;
yLocation = j;
				topLeft = '.';
				topLCenter='2';
				topRCenter='3';
				topRight='4';
				bottomLeft='5';
				bottomLCenter='6';
				bottomRCenter='7';
				bottomRight='8';

}

void tile::displayTop()
{
				cout << topLeft << topLCenter << topRCenter << topRight;
}


void tile::displayBottom()
{
				cout << bottomLeft << bottomLCenter << bottomRCenter << bottomRight;
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

void tile::testSingleDisplay()
{
				displayTop();
				cout <<endl;
				displayBottom();
				cout <<endl;
}
