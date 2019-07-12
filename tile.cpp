//Jessica Barnett and Thomas Honnell
//Summer 2019
//tile.cpp

#include "starSystem.h"

using namespace std;

tile::tile() //constuctor
{
  xLocation = 0;
  yLocation = 0;
  lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
  whatIsHere = '.'; //default ., or s for small planet, or 1,2,3,4 for big planet parts, or S for sun
  color1 = 'a';
  color2 = 'a';

  //these eight character fields (below) are displayed for each tile
  topLeft = ' ';
  topLCenter = ' ';	
  topRCenter=' ';
  tRightEdge=' ';
  bottomLeft=' ';
  shipSpace='_'; // default _ or Q for ship
  bottomRCenter=' ';
  bRightEdge=' ';
}


tile::tile(int i, int j) //constuctor
{
  xLocation = i;
  yLocation = j;
  lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
  whatIsHere = '.'; //default ., or P for small planet, or 1,2,3,4 for big planet parts, or S for sun
  color1 = 'a';
  color2 = 'a';

  topLeft = ' ';
  topLCenter = ' ';	
  topRCenter=' ';
  tRightEdge=' ';
  bottomLeft=' ';
  shipSpace='-'; // default _ or Q for ship
  bottomRCenter=' ';
  bRightEdge=' ';
}


void tile::fillPlanet(int i, int j, char color1, char anotherColor)
{
  xLocation = i;
  yLocation = j;
  lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
  whatIsHere = 's'; //default ., or s for small planet, or 1,2,3,4 for big planet parts, or S for sun
  color1 = 'r';
  color2 = 'y';


  //these below are the eight characters that print
  topLeft =' ';
  topLCenter = '@';	
  topRCenter='@';
  tRightEdge=' ';
  bottomLeft=' ';
  shipSpace='@'; // default _ or Q for ship
  bottomRCenter='@';
  bRightEdge=' ';
}

//starSystems display uses displayTop to print the whole top line of all tiles
// being displayed (starting at top so j index starts at 10 and is decremented)
void tile::displayTop()
{
  if(color1=='r' && color2=='y')
  {
    cout << REDonYELLOW << topLeft << topLCenter<< YELLOWonRED << topRCenter << tRightEdge<< RESET;
  }
  else
  {
    cout << topLeft << topLCenter << topRCenter << tRightEdge;
  }
}


void tile::displayBottom()
{

  if(color1=='r' && color2=='y')
  {
    cout << REDonYELLOW << bottomLeft << RESET << shipSpace << YELLOWonRED << bottomRCenter << bRightEdge <<RESET;
  }
  else
  {
    cout << bottomLeft << shipSpace << bottomRCenter << bRightEdge;
  }
}
