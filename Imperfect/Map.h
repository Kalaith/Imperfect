#pragma once
#include "Tile.h"
#include <SFML\Graphics.hpp>

class Map {

private:
	const static int MAP_HEIGHT = 26;
	const static int MAP_WIDTH = 20;
	const static int MIN_ROOMS = 1;
	const static int MAX_ROOMS = 6;
	const static int MIN_ROOM_HEIGHT = 3;
	const static int MAX_ROOM_HEIGHT = 5;
	const static int MIN_ROOM_WIDTH = 3;
	const static int MAX_ROOM_WIDTH = 6;

	Tile * map [MAP_HEIGHT][MAP_WIDTH];
public:
	Map();
	~Map();
	Tile * getTileAt(int x, int y);
	void RenderMap(sf::RenderWindow & rw);
	void CreateRoom(int startx, int starty, int width, int heigh);

};