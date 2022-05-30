/////////////////////////////////////////////
//D2.h
#pragma once
#include "B1.h"
class D2 : B1
{
	int d2;
public:
	D2(int x, int y) : B1(y)
	{
		d2 = x;
	}
	void show_d2();
};
