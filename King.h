#pragma once
#include"Piece.h"

class King:public Piece
{
public:
	King(int _r, int _c, Color _C, Board* _b);
	bool kingLegality(int sr, int sc, int dr, int dc);
	virtual void draw();
};

