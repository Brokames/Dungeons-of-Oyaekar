#ifndef _ENTITY_H
#define _ENTITY_H

#include <iostream>
#include <string>

using namespace std;

class Entity {
public:
    Entity(int, const string&);
    string GetName() const;
protected:
    int MaxHealth;
private:
    string Name;
};

class Playable: public Entity{
public:
    Playable(int, const string&);
protected:
private:

};

class NonPlayable: public Entity{
public:
    NonPlayable(int, const string&);
protected:
private:
};
#endif //_ENTITY_H
