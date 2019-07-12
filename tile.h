//Jessica Barnett and Thomas Honnell
//Summer 2019
//tile.h


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
    void fillPlanet(int i, int j, char color1, char color2);
    void printTile();

  private:
    int xLocation;
    int yLocation;
    char whatIsHere; //top left location .for empty space s for small planet. 1,2,3,4 for part of big planet. S for sun
    char lifeType; //default N none, can be I inteligent, D not inteligent but dangerous, S safe and not inteligent
char color1;
char color2;


    char topLeft;
    char topLCenter;
    char topRCenter;
    char tRightEdge;
    char bottomLeft;
    char shipSpace;  //bottom Lcenter space - should be '-' unless ship is there. then ship icon Q 
    char bottomRCenter;
    char bRightEdge;
};
