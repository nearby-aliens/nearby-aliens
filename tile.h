//Jessica Barnett and Thomas Honnell
//Summer 2019
//ptTwoAu.h


#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class tile
{
				public:
								tile();
								tile(int i, int j);
								void displayTop();
								void displayBottom();
								void testDisplay2by3();
								void testSingleDisplay();

				private:
								int xLocation;
								int yLocation;
								char topLeft;
								char topLCenter;
								char topRCenter;
								char topRight;
								char bottomLeft;
								char bottomLCenter;
								char bottomRCenter;
								char bottomRight;
};
