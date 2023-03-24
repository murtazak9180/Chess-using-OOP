#pragma once
#include"Utility.h"
class Board;
class Piece
{
protected:
	int ri, ci;
	Color C;
	Board* B;
public:
	Piece(int r, int c, Color _c, Board* _b);
	virtual void draw() = 0;
	void  move(int _r, int _c);
	Color getColor();

};

