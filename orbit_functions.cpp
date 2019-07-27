//listen to messages
int message_inbox::message_inbox_listen(char planetCode)
{
  //THIS is where planet code could be used to get a hard coded message

  //This is for no intelligent life

  cout>>"There is no communication being recieved";
  return 1;

}

int message_inbox::decode_message(char planetCode, int recieved_message)
{
  //if statements for matching planetcode for what we want

  //IF STATEMENT SUCCESS JUST FOR TESTING


  //MINIGAME GO HERE
  char test[] = {'h','e','l','l','o'};
  if(hangman(test)){
    cout>>"message is decoded";
    return 0;
  }
  else{
    cout>>"message decoding failed";
    return 1;
  }

  cout>>"There is no message to decode";
  return 1;
}

int message_inbox::gift_exchange()
{
}
