#include "Player.h"
Player:: Player(string _n, Color _c) {
	this->C = _c;
	this->name = _n;
}
string Player::getName() {
	return this->name;
}
Color Player::getColor() {
	return this->C;
}