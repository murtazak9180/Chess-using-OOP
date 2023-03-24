#pragma once
#include<string>
using namespace std;
#include "Utility.h"
class Player
{
	string name;
	Color C;
public:
	Player(string _n, Color _c);
	string getName();
	Color getColor();
};

