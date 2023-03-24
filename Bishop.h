#pragma once
#include"Piece.h"
class Bishop:public Piece
{
public:
	Bishop(int _r, int _c, Color _C, Board* _b);
	
	virtual void draw();
};

