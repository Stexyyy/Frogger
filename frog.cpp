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
