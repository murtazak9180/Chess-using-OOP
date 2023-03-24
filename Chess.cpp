#include "Chess.h"
#include"Player.h"
#include"Board.h"
#include"Piece.h"
#include<time.h>
Chess::Chess() {
	Ps[0] = new Player("Murtaza", WHITE);
	Ps[1] = new Player("Huzaifa", BLACK);
	B = new Board();
	srand(time(0));
	turn = rand() % 2;
	this->dci = -1;
	this->dri = -1;
	this->sci = -1;
	this->sri = -1;
}
void Chess:: displayName(Player* P) {
	cout << P->getName() << "'s Turn\n";
}
void Chess:: selectPiece() {
	cin >> sri >> sci;
}
void Chess::selectDst() {
	cin >> dri >> dci;
}
bool Chess::isValidSource(Player*P, int r, int c) {
	if (r < 0 || r >= 8 || c < 0 || c >= 8) {
		return false;
	}
	Piece* p = B->getPieceAt(r, c);
	return p != nullptr && p->getColor() == P->getColor();
}
bool Chess::isValidDest(Player* P, int dr, int dc) {
	if (dr < 0 ||dr >= 8 || dc < 0 || dc >= 8) {
		return false;
	}
	Piece* p = B->getPieceAt(dr, dc);
	if (p == nullptr || p->getColor() != P->getColor()) {
		return true;
	}
	else {
		return false;
	}
}
void Chess::turnChange() {
	if (turn == 0) {
		this->turn = 1;
	}
	else {
		this->turn = 0;
	}
}

void Chess::Play() {
	while (true) {
		B->displayBoard();
		displayName(Ps[turn]);
		do {
			do {
				cout << "Select Piece\n";
				selectPiece();
			} while (!isValidSource(Ps[turn], sri, sci));
			cout << "Select Destination\n";
			selectDst();
		} while (!isValidDest(Ps[turn], dri, dci));
		B->move(sri,sci,dri,dci);
		turnChange();


	}
}
