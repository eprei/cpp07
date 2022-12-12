#include "iter.hpp"

int main()
{
	int			tabInteger[] = {1 , 2 , 2 , 4 , 5 , 5 , 6 , 7 , 9};
	std::string	tabStr[] = { "one" , "two" , "three" , "three" , "five" , "five"};

	std::cout << "Function 'printValue' applied to the array 'tabInteger'" << std::endl << std::endl;
	iter(&tabInteger, sizeof(tabInteger) / sizeof(int), &printValue);

	std::cout <<std::endl << "Function 'printValue' applied to the array 'tabStd'" << std::endl << std::endl;
	iter(&tabInteger, tabStr->size(), &printValue);


	return 0;
}
