#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "minigames.h"
using namespace std;


class message
{
 public:
  message();
  ~message();
  char *content;
  message *next;
};
class message_inbox
{
 public:
  message_inbox();
  ~message_inbox();
  message *head;
  int broadcast();
  int decode_message(char planetCode, int recieved_message);
  int message_inbox_listen(char lifeType, int broadcast);
  int gift_exchange(char planetCode, int decoded);
  int add_message(char *content, message **h);
  void display(message *h);

};

//for mining
int probe_mine_fuel(char planetCode, int communicated, char inhabited);
