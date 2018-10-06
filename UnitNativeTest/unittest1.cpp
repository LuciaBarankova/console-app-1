#include "stdafx.h"

#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

#include "../Counter.h"

TEST_CASE("Testovanie funkcnosti counter funkcii", "TestCounter")
{
	string test = "abc";
	REQUIRE(counter_char(test) == 3);
}