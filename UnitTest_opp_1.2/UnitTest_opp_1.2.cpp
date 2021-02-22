#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_1.2/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp12
{
	TEST_CLASS(UnitTestopp12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float c;
			Matrix m;
			m.Init(2,3);
			m.SetArr(1, 1, 0.5);
			m.SetArr(1, 2, 2);
			m.SetArr(1, 3, 3);
			m.SetArr(2, 1, 4);
			m.SetArr(2, 2, 5);
			m.SetArr(2, 3, 6);
			c = m.GetMinValue();
			Assert::AreEqual(c, (float)0.5);
		}
	};
}
