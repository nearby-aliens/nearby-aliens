//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSytem.h
#include "tile.h"
#include "colors.h"

static const int WIDTH = 30;
static const int HEIGHT = 11;

class starSystem
{
  public:
    starSystem(); //constructor
    void makeSystem(int starName);
    void makeAlphaCentauriSystem();
    void markOrbitTiles(int x, int y, char planetCode, char lifeType); //planet codes for ACentauri planet a, b, c, d, e 
    int orbitMenu(char lifeType, char whatIsHere, char planetCode);
    void clearScreen();
    int playLevel(chara & player);
    void printStarSystem();
    void move(chara player);
    void remove(chara player);
    tile* systemArray[WIDTH][HEIGHT];
};
