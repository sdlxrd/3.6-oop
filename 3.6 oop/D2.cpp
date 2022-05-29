#include "D2.h"
D2::D2(int x, int y) : B1(y)
{
	d2 = x;
}
void D2::show_d2()
{
	cout << "class D2:" << endl;
	show_b1();
	cout << "show_D2()" << endl
		<< "D2::d2 = " << d2 << endl;
}