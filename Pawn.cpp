#include "Pawn.h"
#include<iostream>
using namespace std;
Pawn::Pawn(int _r, int _c, Color _C, Board* _b): Piece(_r, _c, _C, _b) {

}

 void Pawn:: draw() {
	 cout << ((C == WHITE) ? 'P' : 'p');
 }
