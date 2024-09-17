#include "StringCalculator.h"
#include <gtest/gtest.h>
//Adding Fixtures
//public testing::Test base class from gtest
class StringCalculatorFixtures:public testing::Test{
protected:
  string input;
  int expectedValue;
  int actualValue;
};
//TESTCASE Which uses fixtures uses TEST_F Macro
TEST_F(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
  input=" ";
  expectedValue = 0;
//Act
  actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}
//Macro by google
TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  string input=" ";
  int expectedValue = 0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}


TEST(StringCalculatorTestSuite,add_ZeroInputString_ZeroIsExpected){
//Arrange
  string input="0";
  int expectedValue = 0;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_OneInputString_OneIsExpected){
//Arrange
  string input="1";
  int expectedValue = 1;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_TwoCommaDelimitedNumbers_SumIsExpected){
//Arrange
  string input="1,2";
  int expectedValue = 3;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_multiple_comma_delimited_numbers_SumIsExpected){
//Arrange
  string input="1,2,3";
  int expectedValue = 6;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_delimited_with_newline_and_comma_SumIsExpected){
//Arrange
  string input=" 1\n2,3";
  int expectedValue = 6;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_negative_numbers_ThrowInvalidArgumentIsExpected){
//Arrange
  string input="1,-2,-3,4";
//Assert
  ASSERT_THROW(Add(input),invalid_argument);
  
}

TEST(StringCalculatorTestSuite,add_Ignore_Number_Over_1000_SumWithoutGreaterthan1000NumberIsExpected){
//Arrange
  string input="42,1001,3";
  int expectedValue = 45;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_multicharacter_delimiter_OnlyDelimeterSumValueIsExpected){
//Arrange
  string input="//[***]\n8***2***3";
  int expectedValue = 13;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_multiple_delimiter_SumOnEachDelometerIsExpected){
//Arrange
  string input="//[*][%]\n4*2%3";
  int expectedValue = 9;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_multiple_multicharacter_delimiters_SumOnEachDelimetersIsExpected){
//Arrange
  string input="//[**][%^]\n4**1%^9";
  int expectedValue = 14;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}








