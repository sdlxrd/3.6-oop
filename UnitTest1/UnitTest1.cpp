#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\3.6 oop\3.6 oop\B1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 1;
			B1 b1(t);
			double res = b1.getB1();
			Assert::AreEqual(t, res);
		}
	};
}
