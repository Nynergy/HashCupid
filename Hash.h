#ifndef HASH_BB
#define HASH_BB
#include <iostream>

/* TODO: Create a hash algorithm to be used for computeHash() */
int computeHash(char * name) {
	int hash;

	std::cout << "Computing hash..." << std::endl;
	for(int i = 0; i < (sizeof(name) / sizeof(char)); i++) {
		hash += *(name + i);
	}

	std::cout << "Hash computed!" << std::endl;

	return hash;
}

float computeMatch(int hash_one, int hash_two) {
	float match;

	if(hash_one == 0) {
		hash_one++;
	}

	if(hash_two == 0) {
		hash_two++;
	}

	if(hash_one > hash_two) {
		std::cout << "Computing match (Greater)..." << std::endl;
		match = (hash_two / hash_one) * 100;
	} else {
		std::cout << "Computing match (Lesser)..." << std::endl;
		match = (hash_one / hash_two) * 100;
	}

	if(match < 0) {
		match = match * -1;
	}

	std::cout << "Match computed!" << std::endl;

	return match;
}

#endif
