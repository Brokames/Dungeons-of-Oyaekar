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
    int HP, MP;
};

class Wearable: public Item{
public:
    Wearable(int, int, int, int, int, const string&);     //Stat setting and Name
private:
    int HP, MP, Defense, Speed, Intel;
};

class OnHand: public Item{
public:
    OnHand(int, int, int, int, int, const string&);     //Stat setting and Name
private:
    int MP, Strength, Speed, Intel, Accuracy;
};

class OffHand: public Item{
public:
    OffHand(int, int, int, int, int, const string&);     //Stat setting and Name
private:
    int Strength, Defense, Speed, Intel, Accuracy;
};

#endif //_ITEM_H
