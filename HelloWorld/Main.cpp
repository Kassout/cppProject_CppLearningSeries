#include <iostream>
#include "Log.h"

int main()
{
	for (int i = 0; i < 5; i++)
	{
		Log("Hello World!");
	}

	Log("================================");

	int i = 0;
	bool condition = true;
	for (;condition;)
	{
		Log("Hello World!");
		i++;
		if (!(i < 5))
			condition = false;
	}

	Log("================================");

	i = 0;
	while (i < 5)
	{
		Log("Hello World!");
		i++;
	}

	Log("================================");

	condition = false;
	do
	{
		Log("Hello World!");
	} while (condition);

	std::cin.get();
}