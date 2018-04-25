#ifndef _ENTITY_H
#define _ENTITY_H

#include <iostream>
#include <string>
#include <vector>

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
    Playable(int, int, int, int, int, int, int, int, int, const string&);  //initializes characters stats (HP, MP, Str (strength), Spd (speed), Intel(intelligence), Accuracy.
                                                                                // Also sets the Exp of the character along with their base inventory space
                                                                                
protected:
    Vector<Item*> Inventory(5); //heterogeneous list to point to items in characters inventory
    Item Armor, OnHand, OffHand;
private:
    int CurrExp, MaxExp, InvSpace, Level;  //CurrExp stores how much exp the characrter currently has, MaxExp stores The exp needed to level up, 
                                           //,InvSpace stores the current inventory space and Level stores the characters current level
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
