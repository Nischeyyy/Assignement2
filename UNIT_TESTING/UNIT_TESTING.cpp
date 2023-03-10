#include "pch.h"
#include "CppUnitTest.h"

extern  "C" int getPerimeter(int*, int*);
extern  "C" int getArea(int*, int*);

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

	};
}
