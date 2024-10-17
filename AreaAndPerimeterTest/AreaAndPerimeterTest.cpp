#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AreaAndPerimeterTest
{
	TEST_CLASS(AreaAndPerimeterTest)
	{
	public:
		
		TEST_METHOD(GetAreaTest)
		{
			int length = 5;
			int width = 4;
			int expectedResult = 20;
			Assert::AreEqual(expectedResult, getArea(&length, &width));
		}

		TEST_METHOD(GetPerimeterTest)
		{
			int length = 5;
			int width = 4;
			int expectedResult = 18;
			Assert::AreEqual(expectedResult, getPerimeter(&length, &width));
		}
	};
}
