#include "events.h"
#include "tile.h"

bool level_one_function()
{
  //victory event
  //This will become more complicated as story is fleshed out

  cout<<"this is the lost civilization! the people you have been searching for!";
  cout<<"\nwhat do you do? input a to offer they join humanity or b to demand";
  cout<<" they join humanity";
  char input;
  cin>>input;
  cin.ignore(30, '\n');

  if(input=='a'){
    cout<<"you win and the lost civilization rejoins humanity!";
    return true;
  }
  else{
    cout<<"you lost and the lost civilization destroys humanity";
    return false;
  }
  
}
