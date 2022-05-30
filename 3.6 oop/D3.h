/////////////////////////////////////////////
//D3.h
#pragma once
#include "B2.h"
#include "D1.h"
#include "D2.h"

class D3 :B2, public D1, public D2
{
	int d3;
public:
	D3(int x, int y, int z, int k, int l, int m) : D1(y, z), D2(k, l), B2(m) 
	{
		d3 = x;
	}
	void show_d3();
};

