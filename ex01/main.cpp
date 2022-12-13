#include "iter.hpp"

int main()
{
	int			tabInteger[] = {1 , 2 , 2 , 4 , 5 , 5 , 6 , 7 , 9};
	std::string	tabStr[] = { "one" , "two" , "three" , "three" , "five" , "five"};

	std::cout << std::endl << "______\t\tFunction 'printValue'\t\t_____" << std::endl;

	std::cout << "Function 'printValue' applied to the array 'tabInteger'" << std::endl << std::endl;
	iter<int>(tabInteger, sizeof(tabInteger) / sizeof(int), &printValue);

	std::cout <<std::endl << "Function 'printValue' applied to the array 'tabStd'" << std::endl << std::endl;
	iter<std::string>(tabStr, tabStr->size(), &printValue);

	std::cout << std::endl << "______\t\tFunction 'addPlusOne'\t\t_____" << std::endl;

	std::cout << "Function 'addPlusOne' applied to the array 'tabInteger'" << std::endl << std::endl;
	iter<int>(tabInteger, sizeof(tabInteger) / sizeof(int), &addPlusOne);

	std::cout <<std::endl << "Function 'addPlusOne' applied to the array 'tabStd'" << std::endl << std::endl;
	iter<std::string>(tabStr, tabStr->size(), &addPlusOne);

	return 0;
}
