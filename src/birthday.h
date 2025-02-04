#pragma once

#include <array>

const int DAYS_PER_YEAR = 365;

// Represents a population and their birthdays. Each index of the array is a day of the year
// and each element at that index is the number of people whose birthday is on that day.
typedef std::array<int,DAYS_PER_YEAR> Birthdays;

// Creates and returns a Birthdays array representing n people with birthdays chosen at random.
Birthdays makeRandomBirthdays(int n);

// Returns true if at least two people in the given Birthdays array have the same birthday.
bool hasSameBirthday(Birthdays birthdays);
