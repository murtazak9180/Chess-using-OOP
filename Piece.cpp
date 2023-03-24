#include "Piece.h"


Piece::Piece(int r, int c, Color _c, Board* _b) {
	this->ri = r;
	this->ci = c;
	this->C = _c;
	this->B = _b;
}
void Piece::move(int _r, int _c) {
	this->ri = _r;
	this->ci = _c;
}
Color Piece::getColor() {
	return this->C;
}