#include<SFML/Graphics.hpp>
#include<iostream>
#include"globals.h"
#include"frog.h"
using namespace std;

frog player; // make a frog
int timer = 0;

int main()
{
	//game variables and setup
	srand(time(NULL)); // seed rand
	bool keys[] = { false, false, false, false }; //used for user input.

	//sfml boilerplate stuff
	sf::RenderWindow screen(sf::VideoMode(1000, 1000), "Frogger!");

	while (screen.isOpen()) {//gameloop
		//input section
		sf::Event event;
		while (screen.pollEvent(event)) { // look for user input
			if (event.type == sf::Event::Closed) // check if game window is closed
				screen.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
				keys[UP] = true;
			}
			else keys[UP] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
				keys[DOWN] = true;
			}
			else keys[DOWN] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
				keys[LEFT] = true;
			}
			else keys[LEFT] = false;

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
				keys[RIGHT] = true;
			}
			else keys[RIGHT] = false;
		}
		//physics section -----------------------------

		player.jump(keys);
		timer++;
		if (timer > 200) {
			player.jump(keys);
			timer = 0;
		}


		//render section -------------------------------
		screen.clear();
		
		player.draw(screen);

		screen.display();

	}// end game loop ----------------------------
	cout << "game over." << endl;
	return 0;


}
