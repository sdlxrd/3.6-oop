#include "D1.h"
D1::D1(int x, int y) :B1(y)
{
	d1 = x;
}
void D1::show_d1()
{
	cout << "class D1:" << endl;
	show_b1();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl;
}