#include <iostream>

#define LOG(x) std::cout << x << std::endl

void Increment(int* value) // use pointer to get the memory address of the variable passed by as parameter so we can modify it.
{
	(*value)++; // dereference the value so that we can actually write to that memory instead of modifying the pointer itself
}

void Increment(int& value) // pass by references, exactly the same thing as above but clearer
{
	value++;
}

int main()
{
	int a = 5;
	int& ref = a; // ref is a, Reference is just creating an allias of a to be used as if it was a.
	ref = 2;

	LOG(a);

	Increment(a); // use ampersand to get the memory address reference of that variable
	LOG(a);

	std::cin.get();
}