#include "Knight.h"

#include<iostream>
using namespace std;
Knight::Knight(int _r, int _c, Color _C, Board* _b) : Piece(_r, _c, _C, _b) {
	
}

void Knight::draw() {
	cout << ((C == WHITE) ? 'K' : 'k');
}