#include <iostream>

#include "Animal.h"

int main() {
	Turtle turtle_friend;

	std::cout << turtle_friend.MakeSound() << std::endl;

	Bug bug_enemy;
	std::cout << bug_enemy.MakeSound() << std::endl;

	return 0;
}
