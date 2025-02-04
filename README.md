# Assignment: Birthday Paradox

For this assignment, do Project P-1.3 in the book, which is restated below:

> The birthday paradox says that the probability that two people in a room will have the same birthday is more than half as long as the number of people in the room (_n_), is more than 23. This property is not really a paradox, but many people find it surprising. Design a C++ program that can test this paradox by a series of experiments on randomly generated birthdays, which test this paradox for _n_ = 5,10,15,20,...,100. You should run at least 10 experiments for each value of _n_ and it should output, for each _n_, the number of experiments for that n, such that two people in that test have the same birthday.

Additional requirements:

* For the output, print the results for each _n_ on a separate line. How you format the lines is up to you, but be sure to print at least the value of _n_ and the number of passing experiments.
* The code to generate the random birthdays and test for the same birthday should be placed in `birthday.cpp`. The code to run the experiments should be placed in `main.cpp`.
* Add at least one passing unit test in `birthday_test.cpp`.

Hints:

* The issue of leap years can be ignored.
* You don't have to define any custom classes, but you can if you want to.
* You don't have to write unit tests for the parts of the program that generate random data.
* Refer to the "Randomness" lab for proper random number generation.
