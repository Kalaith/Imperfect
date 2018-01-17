#include "Map.h"
#include <iostream>

Map::Map()
{
	for (int i = 0; i < MAP_HEIGHT; i++) {
		for (int j = 0; j < MAP_WIDTH; j++) {
			map[i][j] = new Tile(i, j, 0, TileType::FILLED);

			// random number between 0-1, this will give a result like 0.76 then we just do ranges for each type of tile it could be.

			/*if (i == 0 || j == 0 || i == MAP_HEIGHT-1 || j == MAP_WIDTH-1) {
				map[i][j] = new Tile(i, j, TileType::WALL);
			}
			else {
				map[i][j] = new Tile(i, j, TileType::FLOOR);
			}*/
		}
	}
}

Map::~Map()
{
	for (int i = 0; i < MAP_HEIGHT; i++) {
		for (int j = 0; j < MAP_WIDTH; j++) {
			delete map[i][j];
		}
	}
}

Tile * Map::getTileAt(int x, int y)
{
	return map[x][y];
}

void Map::RenderMap(sf::RenderWindow & rw)
{
	for (int i = 0; i < MAP_HEIGHT; i++) {
		for (int j = 0; j < MAP_WIDTH; j++) {
			map[i][j]->Render(rw);
		}
	}
}

void Map::CreateRoom(int startx, int starty, int width, int heigh)
{
	for (int i = startx; i < width; i++) {
		for (int j = starty; j < heigh; j++) {
			map[i][j]->SetTileType(TileType::FLOOR);
		}
	}
}
