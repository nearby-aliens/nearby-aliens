//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSytem.h
#include "tile.h"
#include "colors.h"

class starSystem
{
  public:
    starSystem(); //constructor
    void addPlanet(int i, int j);
    void printStarSystem();
    void move(chara p);
  private:
    tile* systemArray[30][15];
};
