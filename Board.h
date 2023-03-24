#pragma once
class Piece;
class Board
{
	Piece*** Ps;
public:
	Board();
	void displayBoard();
	Piece* getPieceAt(int r, int c);
	void move(int sr, int sc, int dr, int dc);
};

