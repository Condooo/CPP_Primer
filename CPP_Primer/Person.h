#ifndef PERSON
#define PERSON
#include <string>
#include <iostream>

struct Person {
	std::string getName() const { return name; }
	std::string getAddress() const { return address; }

	std::string name;
	std::string address;
};

#endif // !PERSON