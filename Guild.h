#ifndef GUILD_H
#define GUILD_H

#include <iostream>
#include <string>

using namespace std;

// forward declaration of Hero (defined elsewhere)
class Hero;

class Guild {
  string guildName;
  Hero* roster[15];
  int memberCount;
public:
  Guild(string name);
  ~Guild();
  int calculateTotalGuildPower();
  void displayGuildStats();
  void operator+=(Hero* newMember);
  friend ostream& operator<<(ostream& output, const Guild& guild);
};

#endif // GUILD_H
