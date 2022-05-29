#pragma once
#include "B2.h"
#include "D1.h"
#include "D2.h"

class D3 :B2, public D1, public D2
{
	int d3;
public:
	D3(int, int, int, int, int, int);
	void show_d3();
};

