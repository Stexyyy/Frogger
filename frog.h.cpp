#include<SFML/Graphics.hpp>
#include<iostream>
using namespace std;

class frog {
private: // can only be seen by class members
	float xpos;
	float ypos;
	int lives;
	float xVel;
	float yVel;



public: //can be seen by anything in the program itself
	frog();
	void draw(sf::RenderWindow& window); // & returns the address of the pointer.
	void jump(bool* keys); // * returns the value of its pointer
	float returnx() { return xpos; } // small enough to define here instead of .cpp file
	float returny() { return ypos; }
	void ded();
	int returnlives() { return lives; }
	void printinfo() { cout << "I am a frog and my position is " << xpos >> "," << ypos << endl; } // for testing.

};

