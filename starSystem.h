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
    //void addSmallPlanet(int i, int j, char color1, char color2);
    void makeSystem(int starName);
    void makeAlphaCentauriSystem();
    void printStarSystem();
    void move(chara p);
  private:
    tile* systemArray[WIDTH][HEIGHT];
};
