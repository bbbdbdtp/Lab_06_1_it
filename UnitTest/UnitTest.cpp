#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_06_1_it\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int myArray[24];
			fillArray(myArray);

			for (int i = 0; i < 25; ++i) {
				Assert::AreEqual(true, myArray[i] >= -20 && myArray[i] <= 30);
			}

		}
	};
}