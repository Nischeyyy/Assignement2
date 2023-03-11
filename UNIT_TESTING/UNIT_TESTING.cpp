#include "pch.h"
#include "CppUnitTest.h"

extern  "C" int getPerimeter(int*, int*);
extern  "C" int getArea(int*, int*);
extern  "C" int setLength(int, int*);
extern  "C" int setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UNITTESTING
{
	TEST_CLASS(UNITTESTING)
	{
	public:

		TEST_METHOD(getPerimeterTest)
		{

			int length = 6;
			int width = 4;
			int result;
			int resultexpected = 20;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(resultexpected, result);


		}

		TEST_METHOD(getAreaTest)
		{
			int length = 6;
			int width = 4;
			int resultexpected = 24;
			int result;
			result = getArea(&length, &width);
			Assert::AreEqual(resultexpected, result);

		}
		TEST_METHOD(lengthsetTest)
		{
			int length = 0;
			setLength(21, &length);
			Assert::AreEqual(21, length);
		}
		TEST_METHOD(OutlengthsetTest)
		{
			int length = 0;
			setLength(9999999, &length);
			Assert::AreEqual(9999999, length);
		}
		TEST_METHOD(Minus_lengthsetTest)
		{
			int length = 0;
			setLength(-56, &length);
			Assert::AreEqual(-56, length);
		}
		TEST_METHOD(setWidth_normal_Test)
		{
			int length = 0;
			setWidth(95, &length);
			Assert::AreEqual(95, length);
		}
		TEST_METHOD(setWidth_out_Test)
		{
			int length = 0;
			setWidth(100000, &length);
			Assert::AreEqual(100000, length);
		}

		TEST_METHOD(setWidth_minus_Test)
		{
			int length = 0;
			setWidth(-100000, &length);
			Assert::AreEqual(-100000, length);
		}




	};
}
