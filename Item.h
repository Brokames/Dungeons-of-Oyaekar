#ifndef _ITEM_H
#define _ITEM_H

#include <iostream>
#include <string>

using namespace std;

class Item {
public:
    Item(const string&);    //Name the object
    //Get functions to return stats and names of items
    int GetName();
    int GetHP();
    int GetMP();
    int GetStr();
    int GetDef();
    int GetSpd();
    int GetInt();
    int GetAcc();
protected:
    int HP, MP, Strength, Defense, Speed, Intel, Accuracy;
private:
    string Name;
};

class Consumable: public Item{
public:
    Consumable(int, int, const string&);   //Set values for HP, MP and Name
private:
};

class Wearable: public Item{
public:
    Wearable(int, int, int, int, int, const string&);     //Stat setting and Name
private:
};

class OnHand: public Item{
public:
    OnHand(int, int, int, int, int, const string&);     //Stat setting and Name
private:
};

class OffHand: public Item{
public:
    OffHand(int, int, int, int, int, const string&);     //Stat setting and Name
private:
};

#endif //_ITEM_H
