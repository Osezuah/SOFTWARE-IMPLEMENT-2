#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int *length, int *width);
extern "C" void setLength(int input, int *length);
extern "C" void setWidth(int input, int *width);

namespace SoftwareImplementationUnitTest
{
	TEST_CLASS(SoftwareImplementationUnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			//Testing the getPerimeter() function
			int Answer = 0;
			int numlength1 = 7;
			int numwidth1 = 10;
			Answer = getPerimeter(&numlength1, &numwidth1);
			Assert::AreEqual(34, Answer);
		}
		TEST_METHOD(TestMethod2)
		{
			//testing the getArea() function
			int Answer = 0;
			int numlength1 = 3;
			int numwidth1 = 5;
			Answer = getArea(&numlength1, &numwidth1);
			Assert::AreEqual(15, Answer);
		}
		TEST_METHOD(TestMethod3)
		{
			// testing if the setLength() allows a number between 1 to 99 inclusive
			int length;
			int input = 67;
			setLength(input, &length);
			{
				Assert::AreEqual(input, length);
			}
		}
	    TEST_METHOD(TestMethod4)
		{
			//testing if the setLength() does not allow a number less than 1
			int length2; 
			int input2 = 0;
			setLength(input2, &length2);
			{
				Assert::AreEqual(input2, length2);
			}

		}

		TEST_METHOD(TestMethod5)
		{
			//testing if the setLength() does not allow a number greater than 99
			int length3;
			int input3 = 100;
			setLength(input3, &length3);
			{
				Assert::AreEqual(input3, length3);
			}

		}

		TEST_METHOD(TestMethod6)
		{
			//testing if the setWidth() allows a number between 1 and 99 inclusive
			int width;
			int input = 8;
			setWidth(input, &width);
			{
				Assert::AreEqual(input, width);
			}
		}
		TEST_METHOD(TestMethod7)
		{
			//testing if the setWidth() does not allow a number less than 1
			int width2;
			int input2 = -16;
			setWidth(input2, &width2);
			{
				Assert::AreEqual(input2, width2);
			}

		}
		TEST_METHOD(TestMethod8)
		{
			//testing if the setWidth() does not allow a number greater than 99
			int width3;
			int input3 = 120;
			setWidth(input3, &width3);
			{
				Assert::AreEqual(input3, width3);
			}
		}
	};
}
