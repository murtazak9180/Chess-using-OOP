#include "Rook.h"

#include<iostream>
using namespace std;
Rook::Rook(int _r, int _c, Color _C, Board* _b) : Piece(_r, _c, _C, _b) {

}

void Rook::draw() {
	cout << ((C == WHITE) ? 'R' : 'r');
}