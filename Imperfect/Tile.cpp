#include "Tile.h"

Tile::Tile(int x, int y, int cost, TileType t) :  x(x), y(y), cost(cost), type(t)
{
	rectangle.setSize(sf::Vector2f(25, 25));
	rectangle.setOutlineColor(sf::Color::Black);
	rectangle.setOutlineThickness(1);
	if (t == TileType::FLOOR) {
		rectangle.setFillColor(sf::Color::Green);
	}
	else if (t == TileType::WALL) {
		rectangle.setFillColor(sf::Color::Blue);
	}
	rectangle.setPosition(25 * x, 25 * y);

}

void Tile::Render(sf::RenderWindow & rw)
{
	rw.draw(rectangle);
}

void Tile::SetTileType(TileType t)
{
	type = t;

	if (t == TileType::FLOOR) {
		rectangle.setFillColor(sf::Color::Green);
	}
	else if (t == TileType::WALL) {
		rectangle.setFillColor(sf::Color::Blue);
	}
}
