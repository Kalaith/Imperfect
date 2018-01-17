#include <SFML\Graphics.hpp>
#include "Map.h";
#include "Player.h";
#include "Input.h";

int main()
{
	sf::RenderWindow window(sf::VideoMode(650, 500), "Imperfect");

	Map * map = new Map();
	Player * player = new Player(5, 5);
	Input * input = new Input(player);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed || event.type == sf::Event::KeyReleased) {
				input->DoInput(event);
			}

		}

		window.clear();

		map->RenderMap(window);
		player->Render(window);

		window.display();
	}

	return 0;
}

