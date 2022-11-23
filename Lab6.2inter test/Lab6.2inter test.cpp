#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2 inter/Lab6.2 inter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab62intertest
{
	TEST_CLASS(Lab62intertest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t = 0;
			int arr[8] = { 1, -4, 4, 6, 2, 0, -3, -2 };
			int amount = 0;
			double serednie_arif = 0;
			int all_i_elements = 0;
			t = calculate(arr, 8, 0, serednie_arif, all_i_elements, amount);
			Assert::AreEqual(t, 3.6667, 0.0001);
		}
	};
}
