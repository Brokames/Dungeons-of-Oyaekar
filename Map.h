#ifndef _MAP_H
#define _MAP_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Region;
class City;
class Dungeon;
enum RegNames {A,B,C,D,E,F,G};

//Creates the ability to swap between map regions
class Global{
public:
    Global();
private:
    Region Regs[7];               //Creates 7 regions which can be accessed in the map
    RegNames CurReg;
};

//Base grid Map
class Map {
public:
    Map(const string&);
protected:
private:
    string Name;
};


//Basically the overworld
class Region: public Map{
public:
    Region();
private:
    vector<City> CityList;          //Keeps track of cities and positions
    vector<Dungeon> DungeonList;    //Keeps track of dungeons and positions
};

//Sub maps in regions with nonhostiles
class City: public Map{
public:
    City();
private:
    int xCoord, yCoord;     //Used in Regions list to determine placement
};

//Sub maps in regions with hostiles
class Dungeon: public Map{
public:
    Dungeon();
private:
    int xCoord, yCoord;     //Used in Regions list to determine placement
};


#endif _MAP_H
