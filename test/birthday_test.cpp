#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>
#include "birthday.h"

using namespace std;

TEST_CASE("For a population of zero, nobody has the same birthday") {
    Birthdays birthdays;
    birthdays.fill(0);
    REQUIRE_FALSE(hasSameBirthday(birthdays));
}

TEST_CASE("If everyone has a different birthday, nobody has the same birthday") {
    Birthdays birthdays;
    birthdays.fill(1);
    REQUIRE_FALSE(hasSameBirthday(birthdays));
}

TEST_CASE("If there are only two people who share the same birthday, then somebody has the same birthday") {
    Birthdays birthdays;
    birthdays.fill(0);
    birthdays[42] = 2;
    REQUIRE(hasSameBirthday(birthdays));
}

TEST_CASE("If every birthday is shared by two people, then somebody has the same birthday") {
    Birthdays birthdays;
    birthdays.fill(2);
    REQUIRE(hasSameBirthday(birthdays));
}
