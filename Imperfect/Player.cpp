#include "Player.h"

Player::Player(int x, int y):x(x), y(y)
{

}

Player::~Player()
{
}

void Player::Render(sf::RenderWindow & rw)
{
	rectangle.setSize(sf::Vector2f(25, 25));
	rectangle.setOutlineColor(sf::Color::Black);
	rectangle.setOutlineThickness(1);
	rectangle.setFillColor(sf::Color::Red);
	rectangle.setPosition(25 * x, 25 * y);

	rw.draw(rectangle);
}

void Player::Move(int i, int j)
{
	x = x + i;
	y = y + j;
}
