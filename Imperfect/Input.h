#pragma once
#include "Player.h";

class Input {
private:
	Player * p;
	bool pressed;
public:
	Input(Player * p);
	void DoInput(sf::Event e);
};