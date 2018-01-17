#include "Input.h"

Input::Input(Player * p) : p(p)
{
	pressed = false;
}

void Input::DoInput(sf::Event e)
{
	if (e.type == sf::Event::KeyPressed) {
		if (e.key.code == sf::Keyboard::Left) {
			p->Move(-1, 0);
			pressed = true;
		}
		if (e.key.code == sf::Keyboard::Right) {
			p->Move(1, 0);
			pressed = true;
		}
		if (e.key.code == sf::Keyboard::Up) {
			p->Move(0, -1);
			pressed = true;
		}		
		if (e.key.code == sf::Keyboard::Down) {
			p->Move(0, 1);
			pressed = true;
		}
	}
	if (e.type == sf::Event::KeyReleased) {
		pressed = false;
	}

}
