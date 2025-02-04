#include "birthday.h"

#include <cstdlib>
#include <iostream>

using namespace std;

const int NUM_EXPERIMENTS = 10;

void runExperiments()
{
	for (int n = 5; n <= 100; n += 5) {
		int sameBirthday = 0;
		for (int experiment = 0; experiment < NUM_EXPERIMENTS; experiment++) {
			auto birthdays = makeRandomBirthdays(n);
			if (hasSameBirthday(birthdays)) {
				sameBirthday++;
			}
		}
		cout << "People: " << n << "  Experiments with same birthday: " << sameBirthday << endl;
	}
}

int main()
{
	runExperiments();
	return EXIT_SUCCESS;
}
