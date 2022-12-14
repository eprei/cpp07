#include "Array.hpp"

#include <iostream>
#include "Array.hpp"
#include <stdlib.h>

// #define MAX_VAL 5
#define MAX_VAL 9

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
		std::cout << "numbers[" << i << "]" << "\t=\t" << numbers[i] << std::endl;
		std::cout << "mirror[" << i << "]" << "\t=\t" << mirror[i] << std::endl;
	}
	std::cout << std::endl << "Constructeur par copie et opérateur d'assignation" << std::endl << std::endl;

	Array<int> tmp = numbers;
	Array<int> test(tmp);

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "tmp[" << i << "]" << "\t\t=\t" << tmp[i] << std::endl;
		std::cout << "test[" << i << "]" << "\t\t=\t" << test[i] << std::endl;
	}
	std::cout << std::endl << "Modification of test to verify deep copy" << std::endl;

	for (int i = 0; i < MAX_VAL; i++) { test[i] = 42; }

	std::cout << std::endl << "Reprinting tmp and test" << std::endl << std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		std::cout << "tmp[" << i << "]" << "\t\t=\t" << tmp[i] << std::endl;
		std::cout << "test[" << i << "]" << "\t\t=\t" << test[i] << std::endl;

	}
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}

	std::cout << std::endl << "Attempt to access invalid array numbers to check if exceptions are thrown" << std::endl << std::endl;

	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		int random = rand();
		numbers[i] = random;
		std::cout << "i = " << i << "\trandom = " << random << std::endl << "numbers[" << i << "]" << " = " << numbers[i] << std::endl;
	}
	delete [] mirror;
	return 0;
}
