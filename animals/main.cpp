#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;
	Eagle theBaldEagle;
	std::cout << turtle_friend.MakeSound() << std::endl;
	std::cout <<theBaldEagle.MakeSound() <<std::endl;
	return 0;
}
