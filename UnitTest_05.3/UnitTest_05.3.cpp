#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.3/lab_05.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest053
{
	TEST_CLASS(UnitTest053)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 0.5;
			Assert::AreEqual(1.2849229396461539, h(x));
		}
	};
}
