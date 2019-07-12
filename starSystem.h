//Jessica Barnett and Thomas Honnell
//Summer 2019
//starSytem.h
#include "tile.h"
#include "colors.h"

class starSystem
{
  public:
    starSystem(); //constructor
    //void addSmallPlanet(int i, int j, char color1, char color2);
    void makeSystem(int starName);
    void makeAlphaCentauriSystem();
    void printStarSystem();
  private:
    tile* systemArray[30][15];
};
