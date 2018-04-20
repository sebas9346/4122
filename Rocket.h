#pragma once 

/*
	@author: Anagha Indic 
	@date: April 16, 2018
	@description: Rocket class 
*/
#include <Urho3D/Scene/LogicComponent.h>

class Rocket 
{
	//URHO3D_OBJECT(Rocket, LogicComponent);

public:
	Rocket(); //default constructor

	Rocket(int _xpos){
		score = 0;
		lives = 3;
		killed = false;
	}

	~Rocket();  //destructor

	//Determine if game has ended when rocket gets hit by 
	//an asteroid or some relevant object
	Rocket isDead() {
		if (lives == 0)
			killed = true;
		else
			lives -= 1;
	}

	//Add 1 point to score when rocket successfully
	//destroys a standard asteroid
	Rocket isScore() {
		score += 1; 
	}
	
	//Add 5 points to score when rocket successfully 
	//destroys a special object 
	Rocket isSpecialScore() { 
		score += 5;
	}

	//Getters
	int getX() {
		return x_pos;  //get x position
	}

	int getY() {
		return y_pos;   //get y position
	}

	int getScore() {
		return score;   //get total score
	}

	int getKilled() {
		return killed;  //get killed
	}

	int getLives() {
		return lives;	//get number of lives left
	}
	

private:

	const int y_pos = 100; //some hard coded y position
	int x_pos; //position is only dependent on x position
	bool killed; //true or false value to determine end of game
	int lives; //number of lives
	int score;   //score keeper

};

