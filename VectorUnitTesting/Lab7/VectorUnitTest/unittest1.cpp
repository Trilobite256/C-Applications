#include "CppUnitTest.h"

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

// PRE: N/A
// POST: Adds all the elements in the vector together
// RETURN: The sum of all the elements in the vector
int sum(const vector<int>& v)
{
	return accumulate(v.begin(), v.end(), 0);
}

// PRE: Vector must not be empty
// POST: Finds the max element in the vector
// RETURN: The max element in the vector
int max(const vector<int>& v)
{
	if (v.empty()) {
		return 0;
	}
	return *max_element(begin(v), end(v));
}

// PRE: Vector must not be empty
// POST: Finds the min element in the vector
// RETURN: The min element in the vector
int min(const vector<int>& v)
{
	if (v.empty()) {
		return 0;
	}
	return *min_element(begin(v), end(v));
}

// PRE: Vector must not be empty
// POST: Calls the sum function to get the sum of
//		 the elements and divides it by the size of the vector
// RETURN: The average of all the elements in the vector
double average(const vector<int>& v)
{
	if (v.empty()) {
		return 0;
	}
	return (double)sum(v) / v.size();
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VectorUnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestEmptyVectorMax)
		{
			std::vector<int> v;
			Assert::AreEqual(0, max(v));
		}

		TEST_METHOD(TestVectorSum)
		{
			std::vector<int> v;
			v.push_back(123);
			v.push_back(177);
			Assert::AreEqual(300, sum(v));
		}

		TEST_METHOD(TestEmptyVectorMin) 
		{
			std::vector<int> v;
			Assert::AreEqual(0, min(v));
		}

		TEST_METHOD(TestVectorMax)
		{
			std::vector<int> v;
			v.push_back(90);
			v.push_back(33);
			Assert::AreEqual(90, max(v));
		}

		TEST_METHOD(TestVectorMin)
		{
			std::vector<int> v;
			v.push_back(90);
			v.push_back(33);
			Assert::AreEqual(33, min(v));
		}

		TEST_METHOD(TestEmptyVectorAverage)
		{
			std::vector<int> v;
			Assert::AreEqual(0.0, average(v));
		}

		TEST_METHOD(TestVectorAverage)
		{
			std::vector<int> v;
			v.push_back(90);
			v.push_back(30);
			Assert::AreEqual(60.0, average(v));
		}

		TEST_METHOD(TestVectorAverage2) {
			std::vector<int> v;
			v.push_back(10);
			v.push_back(5);
			Assert::AreEqual(7.5, average(v));
		}

	};
}