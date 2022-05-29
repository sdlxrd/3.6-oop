#include "D3.h"
D3::D3(int x, int y, int z, int k, int m, int n) : D1(y, z), D2(k, m), B2(n)
{
	d3 = x;
}
void D3::show_d3()
{
	cout << "class D3:" << endl;
	show_d1();
	show_d2();
	show_b2();
	cout << "show_d3()" << endl
		<< "D3::d3 = " << d3 << endl << endl;
}