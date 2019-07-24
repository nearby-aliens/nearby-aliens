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
  int match_letter_count=0;

  char *display_string=new char[length+1];

  //initialize empty display
  for(int i=0;i<length;i++)
    display_string[i]='_';

  //while for game
  //either too many wrong words or answer matches current string
  while(wrong_count<6 || strcmp(display_string,answer_word)==0){
    cout<<"This is a game of hangman. input the letter you wish to guess is ";
    cout<<"part of the solution";
    cin >> input_letter;
    cin.ignore(30, '\n');
    for(int i=0;i<length;i++){
      if(input_letter==answer_word[i]){
	match++;
	//for displaying correct letter positions
	display_string[i]=answer_word[i];
      }
    }
    //check for wrong answer
    if(match<0)
      wrong_count++;
    match=0;
  }




    //  0
    // /|\
        |
    // / \

}

