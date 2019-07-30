#include "orbit_functions.h"

message_inbox::message_inbox()
{
}
//listen to messages
int message_inbox::message_inbox_listen(char planetCode)
{
  //THIS is where planet code could be used to get a hard coded message
  if(planetCode=='1'){
    cout<<"sasdfdasdfas;lkjfkdla Decode this message to see what item to bring";
    return 0;
  }

  //This is for no intelligent life

  cout<<"There is no communication being recieved";
  return 1;

}

int message_inbox::decode_message(char planetCode, int recieved_message)
{
  //if statements for matching planetcode for what we want

  //IF STATEMENT SUCCESS JUST FOR TESTING


  //MINIGAME GO HERE
  if(planetCode=='1'){
    char test[] = {'h','e','l','l','o'};
    if(hangman(test)){
      cout<<"message is decoded: bring a rock for gift exchange to be allowed to land. Rock is recorded in the inbox with the planet code in front of it..";
      //inbox[0] = {planetCode,'r','o','c','k'};
      return 0;
    }
    else{
      cout<<"message decoding failed";
      return 1;
    }
  }

  cout<<"There is no message to decode";
  return 1;
}

int message_inbox::gift_exchange(char planetCode, int decoded)
{
  char input[30];
  cout<<"input the type of gift needed to talk to the aliens";
  cin.get(input,29,'\n');
  cin.ignore(1000,'\n');

  if(planetCode=='1' && decoded==0){
    if(strcmp(input,"rock")==0){
      cout<<"successful communication. you may land";
      return 0;
    }
    else{
      cout<<"failed communication. retry";
      return 1;
    }
  }
  cout<<"error";
  return 1;

}
