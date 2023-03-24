#pragma once
#include"Piece.h"
class Pawn : public Piece
{
public:
	Pawn(int _r, int _c,Color _C, Board* _b);
	virtual void draw();
};

