#include "stdafx.h"

#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "../Counter.h"

TEST_CASE("Testovanie funkcnosti counter funkcii", "TestCounter")
{
	string test1 = "abc\n";
	REQUIRE(Spocitaj<_char>(test1) == 3);
	REQUIRE(Spocitaj<_word>(test1) == 1);
	REQUIRE(Spocitaj<_line>(test1) == 1);

	string test2 = ". abc\na..bc\n";
	REQUIRE(Spocitaj<_char>(test2) == 10);
	REQUIRE(Spocitaj<_word>(test2) == 3);
	REQUIRE(Spocitaj<_line>(test2) == 2);

	string test3 = " abc\nabc   Dfg\nabc ...\n";
	REQUIRE(Spocitaj<_char>(test3) == 20);
	REQUIRE(Spocitaj<_word>(test3) == 4);
	REQUIRE(Spocitaj<_line>(test3) == 3);
}