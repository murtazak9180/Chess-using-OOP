#pragma once
#include"Piece.h"

class Queen : public Piece
{
public:
	Queen(int _r, int _c, Color _C, Board* _b);
	virtual void draw();
};

