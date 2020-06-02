#include "pch.h"
#include "CppUnitTest.h"
#include "../MinimumLettersToMakeAnagram/MinimumLettersToMakeAnagram.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace MinimumLettersToMakeAnagramTests
{
	TEST_CLASS(MinimumLettersToMakeAnagramTests)
	{
	public:
		
		TEST_METHOD(CompareAppleAndPear)
		{
			string s1 = "apple";
			string s2 = "pear";
			int minLetters = MinimumLettersToMakeAnagram(s1, s2);
			Assert::AreEqual(3, minLetters);
		}
	};
}
