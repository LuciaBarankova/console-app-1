#include "stdafx.h"

#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "../Counter.h"

TEST_CASE("Testovanie funkcnosti counter funkcii", "TestCounter")
{
	string test1 = "abc\n";
	REQUIRE(counter_char(test1) == 3);
	REQUIRE(counter_word(test1) == 1);
	REQUIRE(counter_line(test1) == 1);

	string test2 = ". abc\na..bc\n";
	REQUIRE(counter_char(test2) == 10);
	REQUIRE(counter_word(test2) == 3);
	REQUIRE(counter_line(test2) == 2);

	string test3 = " abc\nabc   Dfg\nabc ...\n";
	REQUIRE(counter_char(test3) == 20);
	REQUIRE(counter_word(test3) == 4);
	REQUIRE(counter_line(test3) == 3);
}