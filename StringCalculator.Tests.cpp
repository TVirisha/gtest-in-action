#include "StringCalculator.h"
#include <gtest/gtest.h>

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
  string input="1 , 2 ";
  int expectedValue = 3;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_multiple_comma_delimited_numbers_SumIsExpected){
//Arrange
  string input="1 , 2, 3";
  int expectedValue = 6;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_delimited_with_newline_and_comma_SumIsExpected){
//Arrange
  string input=" 1\n2,3";
  int expectedValue = 3;
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue, expectedValue);
}

TEST(StringCalculatorTestSuite,add_negative_numbers_ZeroIsExpected){
//Arrange
  string input="-1";
  int expectedValue = 0;
  string statement = "
//Act
  int actualValue=Add(input);
//Assert
  ASSERT_ANY_THROW(statement)
  
}

TEST(StringCalculatorTestSuite,add_negative_numbers_ZeroIsExpected )
{
    // this tests _that_ the expected exception is thrown
    EXPECT_THROW({
        try
        {
          string input="-1";
          int expectedValue = 0;
         int actualValue=Add(input);
        }
        catch( const MyException& e )
        {
            // and this tests that it has the correct message
            EXPECT_STREQ( "Negatives not allowed:&input", e.what() );
            throw;
        }
    }, MyException );
}




