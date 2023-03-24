#pragma once
class Board;
class Piece;
class Player;


class Chess
{
	int sri, sci, dri, dci;
	int turn;
	Player* Ps[2];
	Board* B;

public:
	Chess();
	void Play();
	void displayName(Player* P);
	void selectPiece();
	void selectDst();
	bool isValidSource(Player *P, int sri, int sci);
	bool isValidDest(Player* P, int dri, int dci);
	void turnChange();
};

