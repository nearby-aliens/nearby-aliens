#include "orbit_functions.h"

message::message()
{
  next=NULL;
  content=NULL;
}
message::~message()
{
  if(next!=NULL)
    delete next;
  if(content!=NULL)
    delete content;
}
message_inbox::message_inbox()
{
  head=NULL;
}
message_inbox::~message_inbox()
{
  if(head!=NULL)
    delete head;
}
int message_inbox::add_message(char *content, message **h)
{
  if(*h==NULL){
    *h = new message;//make new
    (*h)->content = new char[strlen(content)+1];
    strcpy((*h)->content, content);//assign content
    (*h)->next=NULL;
    return 0;
  }
  return add_message(content,&(*h)->next);//reurse if not working
}
void message_inbox::display(message *h)
{
  if(h==NULL){
    cout<<"\n";
    cout<<"end of list of messages";
    cout<<"\n";
    return;
  }
  else{
    cout<<h->content;
    cout<<"\n";
    display(h->next);
  }
}
int message_inbox::broadcast()
{
  cout<<"A request for communication has been broadcasted to any possible available species";
  return 0;
}
//listen to messages
int message_inbox::message_inbox_listen(char lifeType, int broadcast)
{
  //THIS is where planet code could be used to get a hard coded message
  if(lifeType=='I' && broadcast==0){
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
  if(planetCode=='b'){
    char test[] = "funny";
    if(hangman(test)){
      cout<<"message is decoded: bring a rock for gift exchange to be allowed to land. Rock is recorded in the inbox with the planet code in front of it..";
      char content[] = "brock";
      int result=add_message(content,&head);
      cout<<result;
      return 0;
    }
  }

  else if(planetCode=='c'){
      char test[] = "greetings";
      if(anagram(test)){
        cout<<"message is decoded: bring a rock for gift exchange to be allowed to land. Salt is recorded in the inbox with the planet code in front of it..";
        char content[] = "csalt";
        int result=add_message(content,&head);
        cout<<result;
        return 0;
      }
    }
  else if(planetCode=='d'){
    char test[] = "theendforyou";
    if(hangman(test)){
      cout<<"message is decoded: bring a rock for gift exchange to be allowed to land. impossible is recorded in the inbox with the planet code in front of it..";
      char content[] = "dimpossible";
      int result=add_message(content,&head);
      cout<<result;
      return 0;
    }
   }
    else{
      cout<<"message decoding failed";
      return 1;
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

  if(planetCode=='b' && decoded==0){
    if(strcmp(input,"rock")==0){
      cout<<"successful communication. you may land";
      return 0;
    }
    else{
      cout<<"failed communication. retry";
      return 1;
    }
  }
  if(planetCode=='c' && decoded==0){
    if(strcmp(input,"salt")==0){
      cout<<"successful communication. you may land";
      return 0;
    }
    else{
      cout<<"failed communication. retry";
      return 1;
    }
  }
  if(planetCode=='d' && decoded==0){
    if(strcmp(input,"impossible")==0){
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

int probe_mine_fuel(char planetCode, int communicated, char inhabited)
{
  if(communicated!=0 && inhabited=='y'){
    cout<<"you were blown up by the locals! you should have communicated first..";
    return -1;//for blown up
  }
  else if(planetCode=='a'){
    cout<<"you gained 11 fuel";
    return 11;
  }
    else if(planetCode=='b'){
    cout<<"you gained 10 fuel";
    return 10;
  }
  else if(planetCode=='c'){
    cout<<"you gained 20 fuel";
    return 20;
  }
  else if(planetCode=='d'){
    cout<<"you gained 100 fuel";
    return 100;
  }
  else if(planetCode=='e'){
    cout<<"you gained 7 fuel";
    return 7;
  }

  else{
    cout<<"this planet has no fuel";
    return 0;
  }
  cout<<"error should not have reached this";
  return 0;
}
