#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1\oop5.1\Number.cpp"
#include "D:\Student\oop5.1\oop5.1\MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s = "sashko";
			MyException e("sashko");
			Assert::AreEqual(s, e.What());
		}
	};
}
