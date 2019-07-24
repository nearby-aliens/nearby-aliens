//minigames


bool hangman(char *answer_word)
{
  //inititalize an ascii image
  char display_list[15][15];
  for(int i=0;i<15;i++;){
    for(int j=0;j<15;j++;){
      display_list[i][j]=' ';
    }
  }
  int length=strlen(answer_word);
  int wrong_count=0;
  char input_letter;

  //while for game
  while(wrong_count<6){
    cout<<"This is a game of hangman. input the letter you wish to guess is ";
    cout<<"part of the solution";
    cin >> input_letter;
    cin.ignore(30, '\n');





  0
 /|\
  |
 / \
}

