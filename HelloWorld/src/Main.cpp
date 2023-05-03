#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{
	int var = 8;
	int* ptr = &var;
	*ptr = 10;
	LOG(var);

	char* buffer = new char[8]; // => 8 bytes of memory, return a pointer to the beginning of that block of memory
	memset(buffer, 0, 8);

	char** cptr = &buffer; // => &buffer means get the memory address reference of the integer (pointer) that referenced a 8 bytes of char data

	delete[] buffer;
	std::cin.get(); // ==> Dead Code
}