#pragma once
#include<windows.h>
#include<conio.h>
#include<iostream>
using namespace std;

enum Color{BLACK,WHITE=15};

void getRowColbyLeftClick(int& rpos, int& cpos);

void gotoRowCol(int rpos, int cpos);

void SetClr(int clr);

