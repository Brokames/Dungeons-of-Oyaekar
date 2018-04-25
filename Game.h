#ifndef _GAME_H
#define _GAME_H

#include "Entity.h"
#include "Map.h"
#include "Item.h"

using namespace std;

class Game {
public:
    Game();               //Loads in data from file
    void PlayNewGame();   //Places a blank new character and new map in chosen slot
    void SaveGame();      //To be used in game to save data
    void LoadGame();      //Loads into a already created character and map
    void EraseGame();     //Erases data stored in objects
private:
    Playable* p[3];
    Global g[3];
};


#endif //_GAME_H
