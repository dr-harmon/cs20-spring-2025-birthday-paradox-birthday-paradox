#include "birthday.h"
#include <random>

using namespace std;

Birthdays makeRandomBirthdays(int n)
{
	random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, DAYS_PER_YEAR - 1);
    Birthdays birthdays;

    birthdays.fill(0);

    for (auto i = 0; i < n; i++) {
        birthdays[dist(mt)]++;
    }

    return birthdays;
}

bool hasSameBirthday(Birthdays birthdays)
{
    for (auto i = birthdays.begin(); i != birthdays.end(); i++) {
        if (*i > 1) {
            return true;
        }
    }

    return false;
}
