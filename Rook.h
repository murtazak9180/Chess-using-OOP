#pragma once
#include"Piece.h"
class Rook :public Piece
{
public:
	Rook(int _r, int _c, Color _C, Board* _b);
	virtual void draw();
};

