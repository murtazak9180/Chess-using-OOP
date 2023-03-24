#pragma once
#include"Piece.h"
class Knight: public Piece
{
public:
	Knight(int _r, int _c, Color _C, Board* _b);
	virtual void draw();
};

