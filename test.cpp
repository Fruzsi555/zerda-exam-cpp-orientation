#define CATCH_CONFIG_MAIN

#include <iostream>
#include <fstream>
#include "catch.hpp"

#include "FileHandling.h"
#include "Decryption.h"

using namespace std;

TEST_CASE("can shift characters in the English alphabet") {
	string test_word = "a";
	Decryption test;
	REQUIRE(test.decryption(test_word, 1) == "b");
}

TEST_CASE("decryption is case sensitive") {
	string test_word = "aLMa";
	Decryption test;
	REQUIRE(test.decryption(test_word, 1) == "bMNb");
}

TEST_CASE("decryption doesn't change the whitespaces from the original text") {
	string test_word = "alma alma";
	Decryption test;
	REQUIRE(test.decrpytion(test_word, 1) == "bmnb bmnb");
}
