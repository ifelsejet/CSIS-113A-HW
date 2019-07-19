#include <iostream>
#include "Player.h"

Player::Player()
	:Name("Glenn"), average(0.0)
{}//default constructor

Player::Player(string Name)
	:Name(Name), average(0.0)
{

}

Player::Player(string Name, double average)
	:Name(Name), average(average)
{

}


void Player::setPlayer(double avg, string Name) {
	this->average = avg;
	this->Name = Name;

}
double Player::getAverage() {

	return this->average;
}

string Player::getName() {
	return this->Name;
}
