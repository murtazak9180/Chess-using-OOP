#include "Bishop.h"
#include<iostream>
using namespace std;
Bishop::Bishop(int _r, int _c, Color _C, Board* _b) : Piece(_r, _c, _C, _b) {

}

void Bishop::draw() {
	cout << ((C == WHITE) ? 'B' : 'b');
}