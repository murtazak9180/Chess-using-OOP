#include "Queen.h"
#include<iostream>
using namespace std;
Queen::Queen(int _r, int _c, Color _C, Board* _b) : Piece(_r, _c, _C, _b) {

}

void Queen::draw() {
	cout << ((C == WHITE) ? 'Q' : 'q');
}