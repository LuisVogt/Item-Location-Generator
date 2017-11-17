#include <list>
#include "room.h"
#include "extraFunctions.h"
#include "structs.h"
#include <allegro5\allegro.h>
#include "item.h"
#pragma once
class map
{
private:
	std::list<room*> rooms;
	int numberOfRooms;
	ALLEGRO_BITMAP *thisMap;
	ALLEGRO_BITMAP *biggerMap;
	std::list<item> itemsOnMap;
	int standardItemChance;
public:
	void drawRooms(ALLEGRO_BITMAP *drawMap);
	void drawRoomsWithRandomColors(ALLEGRO_BITMAP *drawMap);
	room* findRoomFromTile(pos2D tile);
	void populateRooms();
	void populateItems(std::list<item> items, ALLEGRO_BITMAP *map);
	void saveLargerMapWithItems(int tileSize);

	map();
	map(ALLEGRO_BITMAP *newMap,int itemChance);
	~map();
};

