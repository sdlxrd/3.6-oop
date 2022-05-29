#include "B1.h"
B1::B1()
{
	b1 = 0;
}
B1::B1(int x)
{
	b1 = x;
}
void B1::show_b1()
{
	cout << "Class B1: " << endl;
	cout << "Show b1:" << endl;
	cout << "B1::b1 = " << b1 << endl;
}