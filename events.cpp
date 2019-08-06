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

bool level_two_function()
{
  char input='z';
  int health=5;
  while(health>0){
    cout<<"The civilization you found is not the lost civilization. You still need to seek out the lost humans in another galaxy. These people appear to be something like large bipedal dogs. You start with 5 health\n";
    cout<<"They are wary of you since the only experience they have had with other species is being attacked. They are approaching you to attempt to attack you.how do you behave?\n";
    cout<<"input a to run away.\n";
    cout<<"input b to brace yourself.\n";
    cout<<"input c to bark at them.\n";
    cout<<"input d to throw something.\n";
    cin>>input;
    cin.ignore(30, '\n');
    if(input=='a'){
      cout<<"The dog people get down on all fours and chase you. You are injured before you can stop them";
      health-=1;
    }
    if(input=='b'){
      cout<<"The dog people tackle you and you take damage";
      health-=2;
    }
    if(input=='c'){
      cout<<"The dog people tackle you and you take damage";
      health-=2;
    }
    if(input=='d'){
      cout<<"The dog people chase the stick you throw and come back with it";
    }
    cout<<"\nThere are no more dog people there than before, and now you have to act. what do you do?\n";
    cout<<"input a to pet nearby dog people\n";
    cout<<"input b to play dead";
    cin>>input;
    cin.ignore(30, '\n');
    if(input=='a'){
      cout<<"they realize you are friendly after you pet them. you all become the best of friends!";
    }
    if(input=='b'){
      cout<<"they realize you are friendly only after you dont respond with hostility. they are sorry for hurting you while you tried to express that to them.";
      health-=3;
    }
  }
  if(health<=0){
    cout<<"you emergency teleport back to your ship";
    return false;
  }
  else{
    cout<<"you have successfully communicated with the species and made new friends!";
    return true;
  }
}
