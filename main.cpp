#include "Hash.h"
#include <iostream>

int main(int argc, char * argv[]) {
	char name_one[80];
	char name_two[80];
	int hash_one, hash_two;
	float match;

	std::cout << "Welcome to HashCupid! Please enter the names of the people you wish to match." << std::endl;
	std::cout << "Name One: ";
	std::cin >> name_one;
	std::cout << "Name Two: ";
	std::cin >> name_two;

	hash_one = computeHash(name_one);
	std::cout << "Name One: " << name_one << " => Hash One: " << hash_one << std::endl;
	hash_two = computeHash(name_two);
	std::cout << "Name Two: " << name_two << " => Hash Two: " << hash_two << std::endl;

	match = computeMatch(hash_one, hash_two);

	std::cout << "Match for " << name_one << " and " << name_two << ": " << match << "%" << std::endl;

	/* TODO: Check what the percentage match was and print an appropriate message */

	return 0;
}
