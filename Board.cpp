#include "Board.h"
#include"Piece.h"
#include"Pawn.h"
#include"King.h"
#include"Knight.h"
#include"Queen.h"
#include"Rook.h"
#include"Bishop.h"

Board::Board() {
	Ps = new Piece * *[8];
	for (int r = 0; r < 8; r++) {
		Ps[r] = new Piece * [8];
		for (int c = 0; c < 8; c++) {
			if (r == 1) {
				Ps[r][c] = new Pawn(r, c, WHITE, this);
			}
			else if (r == 6) {
				Ps[r][c] = new Pawn(r, c, BLACK, this);
			}
			else if ((r == 0 && c == 0) || (r == 0 && c == 7)) {
				Ps[r][c] = new Rook(r, c, WHITE, this);
			}
			else if ((r == 7 && c == 0) || (r == 7 && c == 7)) {
				Ps[r][c] = new Rook(r, c, BLACK, this);
			}
			else if ((r == 0 && c == 1) || (r == 0 && c == 6)) {
				Ps[r][c] = new Knight(r, c, WHITE, this);
			}
			else if ((r == 7 && c == 1) || (r == 7 && c == 6)) {
				Ps[r][c] = new Knight(r, c, BLACK, this);
			}
			else if ((r == 0 && c == 2) || (r == 0 && c == 5)) {
				Ps[r][c] = new Bishop(r, c, WHITE, this);
			}
			else if ((r == 7 && c == 2) || (r == 7 && c == 5)) {
				Ps[r][c] = new Bishop(r, c, BLACK, this);
			}
			else if (r == 0 && c == 3) {
				Ps[r][c] = new King(r, c, WHITE, this);
			}
			else if (r == 7 && c == 3) {
				Ps[r][c] = new King(r, c, BLACK, this);
			}
			else if (r == 0 && c == 4) {
				Ps[r][c] = new Queen(r, c, WHITE, this);
			}
			else if (r == 7 && c == 4) {
				Ps[r][c] = new Queen(r, c, BLACK, this);
			}
			else {
				Ps[r][c] = nullptr;
			}

		}

	}
}
Piece* Board:: getPieceAt(int r, int c) {
	return Ps[r][c];
}
void Board:: move(int sr, int sc, int dr, int dc) {
	Piece* P = Ps[sr][sc];
	Ps[sr][sc] = Ps[dr][dc];
	Ps[dr][dc] = P;

}

void Board::displayBoard() {
	system("cls");
	for (int r = 0; r < 8; r++) {
		for (int c= 0; c < 8; c++) {
			if (Ps[r][c] == nullptr) {
				cout << '-';
			}
			else {
				Ps[r][c]->draw();
			}

		}
		cout << endl;
	}
}