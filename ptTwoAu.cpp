//Jessica Barnett and Thomas Honnell
//Summer 2019
//ptTwoAu.cpp

#include "starSystem.h"

using namespace std;

ptTwoAu::ptTwoAu() //constuctor
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

void ptTwoAu::displayTop()
{
				cout << topLeft << topLCenter << topRCenter << topRight;
}


void ptTwoAu::displayBottom()
{
				cout << bottomLeft << bottomLCenter << bottomRCenter << bottomRight;
}

void ptTwoAu::testDisplay2by3()
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

void ptTwoAu::testSingleDisplay()
{
				displayTop();
				cout <<endl;
				displayBottom();
				cout <<endl;
}
