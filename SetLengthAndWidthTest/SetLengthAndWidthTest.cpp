#include "pch.h"
#include "CppUnitTest.h"

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SetLengthAndWidthTest
{
	TEST_CLASS(SetLengthAndWidthTest)
	{
	public:
		
		TEST_METHOD(SetLengthWithinRange)
		{
			int length = 1;
			int input = 50;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}

		TEST_METHOD(SetLengthLowerLimit)
		{
			int length = 1;
			int input = 0;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);// test to see if length was not changed to input value (zero)
			Assert::AreEqual(1, length);// test to see if length is still the same number as it started as
		}

		TEST_METHOD(SetLengthUpperLimit)
		{
			int length = 1;
			int input = 100;
			setLength(input, &length);
			Assert::AreNotEqual(input, length);// test to see if length was not changed to number greater than 99
			Assert::AreEqual(1, length);// test to see if length is still the same number as it started as
		}

		TEST_METHOD(SetWidthWithinRange)
		{
			int width = 1;
			int input = 50;
			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(SetWidthLowerLimit)
		{
			int width = 1;
			int input = 0;
			setWidth(input, &width);
			Assert::AreNotEqual(input, width);// test to see if length was not changed to input value (zero)
			Assert::AreEqual(1, width);// test to see if length is still the same number as it started as
		}

		TEST_METHOD(SetWidthUpperLimit)
		{
			int width = 1;
			int input = 100;
			setWidth(input, &width);
			Assert::AreNotEqual(input, width);// test to see if length was not changed to number greater than 99
			Assert::AreEqual(1, width);// test to see if length is still the same number as it started as
		}
	};
}
