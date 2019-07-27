#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;



class message_inbox
{
 public:
  message_inbox();
  char **inbox;
  int decode_message(char planetCode, int recieved_message);
  int message_inbox_listen(char planetCode);
  int gift_exchange()

};
