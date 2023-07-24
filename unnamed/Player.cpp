#include "player.h"


//Aquí inicializamos los métodos

Player::Player()
{
	this->pos[0] = Config::Player::pos::X;
	this->pos[1] = Config::Player::pos::Y;
	this->size[0] = Config::Player::size::WIDTH;
	this->size[1] = Config::Player::size::HEIGHT;
	this->sprite = Config::Player::sprite;
	this->vel = 0;
};

void Player::setVel(float vel)
{
	this->vel = vel;
};

float Player::getVel() {

	return this->vel;

};

void Player::setPos(float X, float Y) {

	this->pos[0] = X;
	this->pos[1] = Y;

};

float* Player::getPos() {

	return this->pos;

};

void Player::setSize(float WIDTH, float HEIGHT) {
	
	this->size[0] = WIDTH;
	this->size[1] = HEIGHT;

};
float* Player::getSize(){

	return this->size;

};

void Player::setSprite(std::string sprite) {

	this->sprite = sprite;

};


std::string Player::getSprite() {

	return this->sprite;

};