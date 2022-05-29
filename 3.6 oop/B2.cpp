#include "B2.h"
B2::B2()
{
	b2 = 0;
}
B2::B2(int x)
{
	b2 = x;
}
void B2::show_b2()
{
	cout << "class B2 " << endl;
	cout << "show_b2 " << endl;
	cout << "B2::b2 = " << b2 << endl;
}