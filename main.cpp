#include <iostream>

int main(int argc, char * argv[]) {
	char name_one[80];
	char name_two[80];

	std::cout << "Welcome to HashCupid! Please enter the names of the people you wish to match." << std::endl;
	std::cout << "Name One: ";
	std::cin >> name_one;
	std::cout << "Name Two: ";
	std::cin >> name_two;

	return 0;
}
