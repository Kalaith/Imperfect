#pragma once
#include <SFML\Graphics.hpp>
#include "TileType.h"


class Tile {

private:
	int x;
	int y;
	int cost; // The cost of moving through this tile
	sf::RectangleShape rectangle; // Graphical representation
	TileType type; // What type of tile this is
public:
	Tile(int x, int y, int cost, TileType t = TileType::EMPTY);
	void Render(sf::RenderWindow & rw);
	void SetTileType(TileType t);

};