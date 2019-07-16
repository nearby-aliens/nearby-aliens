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
  partialArt = ' ';
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
  partialArt = ' ';//default ' ' - 832 means left justified 3on top display line, 2 on bottom line. 932 would mean right justified 
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

void tile::move()
{
  shipSpace='Q';
}

//to make movement easier
char tile::gethere()
{
  return whatIsHere;
}

void tile::remove()
{
  
  shipSpace='_';
  
}


//starSystems display uses displayTop to print the whole top line of all tiles
// being displayed (starting at top so j index starts at 10 and is decremented)
void tile::displayTop()
{
  if(whatIsHere=='S')
  {
    //yellow sun
    if(color1=='r' && color2=='y') //red on yellow
    {
      cout << REDonYELLOW << topLeft << topLCenter  << topRCenter << tRightEdge <<RESET;
    }
    //red sun
    else if(color1=='y' && color2=='r')  //yellow on red
    {
      cout << YELLOWonRED << topLeft << topLCenter  << topRCenter << tRightEdge <<RESET;
    }

  }
  else
  {
    if(color1=='g' && color2=='c') //green on cyan
    {
      cout << topLeft << GREENonCYAN << topLCenter  << topRCenter <<RESET << tRightEdge;
    }
    else if(color1=='b' && color2=='m') //blue on magenta
    {
      cout << topLeft << BLUEonMAGENTA  << topLCenter  << topRCenter <<RESET << tRightEdge;
    }
    else
    {
      cout << topLeft << topLCenter << topRCenter << tRightEdge;
    }
  }
}


void tile::displayBottom()
{
  if(whatIsHere=='S')
  {
    //yellow sun
    if(color1=='r' && color2=='y') //red on yellow
    {
      cout << REDonYELLOW << bottomLeft << shipSpace  << bottomRCenter << bRightEdge <<RESET;
    }
    //red sun
    else if(color1=='y' && color2=='r')  //yellow on red
    {
      cout << YELLOWonRED << bottomLeft << shipSpace << bottomRCenter << bRightEdge << RESET;
    }

  }
  else
  {
    if(color1=='g' && color2=='c') //green on cyan
    {
      cout << bottomLeft << GREENonCYAN << shipSpace << bottomRCenter <<RESET <<  bRightEdge;
    }
    else if(color1=='b' && color2=='m') //for blue magenta planets
    {
      cout << bottomLeft << BLUEonMAGENTA << shipSpace << bottomRCenter <<RESET <<  bRightEdge;
    }
    else
    {
      cout << bottomLeft << shipSpace << bottomRCenter << bRightEdge;
    }
  }
}

void tile::fillPlanet(int i, int j, char aColor, char anotherColor)
{
  xLocation = i;
  yLocation = j;
  lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
  whatIsHere = 's'; //default ., or s for small planet, or 1,2,3,4 for big planet parts, or S for sun
  color1 = aColor;
  color2 = anotherColor;
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

void tile::fillSunTile( char aColor, char anotherColor)
{
  lifeType ='N'; //default N for none, or I for inteligent, or D for dangerous not inteligent, or S safe not inteligent
  whatIsHere = 'S'; //default ., or s for small planet, or 1,2,3,4 for big planet parts, or S for sun
  color1 = aColor;
  color2 = anotherColor;
  //these below are the eight characters that print
  topLeft ='%';
  topLCenter = '%';	
  topRCenter='%';
  tRightEdge='%';
  bottomLeft='%';
  shipSpace='%'; // default _ or Q for ship
  bottomRCenter='%';
  bRightEdge='%';
}
