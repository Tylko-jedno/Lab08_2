#include "pch.h"   // Для Microsoft Unit Testing Framework
#include "CppUnitTest.h"
#include <string>
#include "../Lab08_2/Lab08_2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(MaxWordLengthTest)
    {
    public:

        // Тест для рядка з кількома словами
        TEST_METHOD(TestMultipleWords)
        {
            string input = "This is a test string";
            size_t expected = 6;  // Найдовше слово - "string"
            Assert::AreEqual(expected, MaxWordLength(input));
        }
    };
}
