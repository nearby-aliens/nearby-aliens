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
  private:
    tile* systemArray[30][15];
};
