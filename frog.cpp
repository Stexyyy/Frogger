#include "frog.h"
#include"globals.h"
#include<SFML/Graphics.hpp>
#include<Windows.h>

//constructor: fills in all the neede class variables.
frog::frog() {
	xpos = 500;
	ypos = 954;
	lives = 5;
	xVel = 0;
	yVel = 0;
}

//draw function draws small green square for frog
void frog::draw(sf::RenderWindow& window) {
	sf::RectangleShape FrogPic(sf::Vector2f(20, 20));
	FrogPic.setFillColor(sf::Color(50, 200, 50));
	FrogPic.setPosition(xpos, ypos);
	window.draw(FrogPic);
}

//movement function for frog (unfinished)
//this function takes a pointer to the array that holds the key presses
void frog::jump(bool* keys) {
	if (keys[UP] == true)
		yVel = -50;
	else if (keys[DOWN] == true)
		yVel = 50;
	else if (keys[RIGHT] == true)
		xVel = 50;
	else if (keys[LEFT] == true)
		xVel = -50;
	else
		yVel = 0;
		xVel = 0;
	ypos += yVel;
	xpos += xVel;
}

//this function kills the frog
void frog::ded() {
	//play explosion sound here
	Beep(500, 500); // temporary until cool explosion
	//hopefully animation here?
	lives--;
	xpos = 500;
	ypos = 954;
}
