#ifndef _ENTITY_H
#define _ENTITY_H

#include <iostream>
#include <string>

using namespace std;

class Entity {
public:
    Entity(const string&);  //initializes name for character
    string GetName() const;
protected:
    int MaxHP, MaxMP, Str, Spd, Intel, Accuracy; //stats for characters
private:
    string Name;
};

class Playable: public Entity{
public:
    Playable(int, int, int, int, int, int, int, int, int, char, const string&);  //initializes characters stats (HP, MP, Str (strength), Spd (speed), Intel(intelligence), Accureacy, and what
                                                                                //the spec(specialization: warrior, mage, or rogue) is). Also sets the Exp of the character along with their
                                                                                //base inventory space
protected:
    Item **Inventory; //heterogeneous list to point to items in characters inventory
    Item Armor, Weapon, OffHand;
private:
    char Spec;  //stores the specialization of the character
    int MaxHP, MaxMP, Str, Spd, Intel, Accuracy;
    int CurrExp, MaxExp, InvSpace;  //CurrExp stores how much exp the characrter currently has, MaxExp stores The exp needed to level up, and InvSpace stores the current inventory space
};

class NonPlayable: public Entity{
public:
    NonPlayable(int, const string&);
protected:
private:
};

class Warrior: public Playable{
  public:
  private:
};

class Mage: public Playable{
  public:
  private:
};

class Rogue: public Playable{
  public:
  private:
};

#endif
