#ifndef _GAME_H
#define _GAME_H

#include "Entity.h"
#include "Map.h"
#include "Item.h"

using namespace std;

class Game {
public:
    Game();               //Creates a set of blank players and maps
    void PlayNewGame();   //Places a blank new character and new map in chosen slot
    void LoadGame();      //Loads into a already created character and map
private:
    Playable* p[3];
    Map* m[3];
};

#endif //_GAME_H
