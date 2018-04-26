#include<iostream>
#include"ability.h"
using namespace std;

Ability::Ability(const string& N, const string& D, int AD, int SP){
  Name = N;
  Description = D;
  Attack = AD;
  SpellPower = SP;
}

string Ability::GetName()
{ return Name; }

string Ability::GetDescription()
{ return Description; }

int Ability::GetPhyPow()
{ return Attack; }

int Ability::GetSpellPow()
{ return SpellPower; }
