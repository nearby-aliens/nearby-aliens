//Jessica Barnett and Thomas Honnell
//Summer 2019
//ptTwoAu.h


#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>

class ptTwoAu
{
				public:
								ptTwoAu();
								void displayTop();
								void displayBottom();
								void testDisplay2by3();
								void testSingleDisplay();

				private:
								char topLeft;
								char topLCenter;
								char topRCenter;
								char topRight;
								char bottomLeft;
								char bottomLCenter;
								char bottomRCenter;
								char bottomRight;
};
