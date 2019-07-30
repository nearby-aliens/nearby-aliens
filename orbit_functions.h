#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "minigames.h"
using namespace std;



class message_inbox
{
 public:
  message_inbox();
  char inbox[200];
  int broadcast();
  int decode_message(char planetCode, int recieved_message);
  int message_inbox_listen(char planetCode);
  int gift_exchange(char planetCode, int decoded);

};
