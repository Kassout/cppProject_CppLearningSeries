#include <iostream>

int main()
{
	char a = 'A';
	std::cout << a << std::endl;

	unsigned int variable = 8; // -4b -> 4b
	std::cout << variable << std::endl;

	variable = 20;
	std::cout << sizeof(variable) << std::endl;

	float floatVariable = 5.5f;
	std::cout << floatVariable << std::endl;

	std::cin.get();
}