#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/intRange.h"
#include "../lab1.1/intRAnge.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab11
{
	TEST_CLASS(UnitTestLab11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			intRAnge a;
			a.Init(1, 4);
			Assert::IsTrue(a.rangeCheck(3));
		}
	};
}
