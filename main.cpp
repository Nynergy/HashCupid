#include "Hash.h"
#include <iostream>

int main(int argc, char * argv[]) {
	char name_one[80];
	char name_two[80];
	int hash_one, hash_two, match;

	std::cout << "Welcome to HashCupid! Please enter the names of the people you wish to match." << std::endl;
	std::cout << "Name One: ";
	std::cin >> name_one;
	std::cout << "Name Two: ";
	std::cin >> name_two;

	hash_one = computeHash(name_one);
	hash_two = computeHash(name_two);

	match = computeMatch(hash_one, hash_two);

	std::cout << "Match for " << name_one << " and " << name_two << ": " << match << "%" << std::endl;

	/* TODO: Check what the percentage match was and print an appropriate message */

	return 0;
}
