#include "King.h"
#include<iostream>
using namespace std;
King::King(int _r, int _c, Color _C, Board* _b) : Piece(_r, _c, _C, _b) {

}
//bool King::kingLegality(int sr, int sc, int dr, int dc) {
//
//}

void King::draw() {
	cout << ((C == WHITE) ? 'K' : 'k');
}