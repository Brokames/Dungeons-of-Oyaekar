#include<string>
#include<cstring>
using namespace std;

#ifndef _ABILITY_H 
#define _ABILITY_H 

class Ability
{
public:
  Ability(const string&, const string&, int, int);
  string GetName();
  string GetDescription();
  int GetPhyPow();
  int GetSpellPow();

private:
  string Name, Description;
  int Attack, SpellPower;
};

#endif
