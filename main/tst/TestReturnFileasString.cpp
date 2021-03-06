/*
	Author: Andrei Martinescu
	
	This file contains automation test for function ReturnFileasString.
		
*/

#include "gtest/gtest.h"
#include "MainFunctions.h"
#include <string>



//Test 1 
TEST(ReturnFileasString, NotOpen)
{
	std::string actual = "NotOpen";
	EXPECT_EQ(actual, ReturnFileasString("main\\tst\\ConfigFiles\\no_config.config"));
}

//Test 2
TEST(ReturnFileasString, ReadContent)
{
	std::string actual = "default_currency = RON\ndefault_income_category = salary\ndefault_spending_category = other\ndefault_wallet \ncurrencies = RON, EUR, USD\nrate_EUR_RON = 4.42\nrate_RON_EUR = 0.23\nrate_USD_RON = 3.92\nrate_EUR_USD = 1.13";
	std::string expected = ReturnFileasString("main\\tst\\ConfigFiles\\empty_after_def_wallet.config");
	EXPECT_EQ(actual, expected);
	
}
//Test 3
TEST(ReturnFileasString, ReadContentEmpty)
{
	std::string actual = "";
	std::string expected = ReturnFileasString("main\\tst\\ConfigFiles\\empty_config.config");
	EXPECT_EQ(actual,expected);
	
}