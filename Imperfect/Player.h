#pragma once
#include <SFML\Graphics.hpp>

class Player {
private:
	int x;
	int y;
	sf::RectangleShape rectangle;
public:
	Player(int x, int y);
	~Player();
	void Render(sf::RenderWindow & rw);
	void Move(int x, int y);

};