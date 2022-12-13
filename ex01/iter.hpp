#ifndef ITER_HPP
# define ITER_HPP

# include <stddef.h>
# include <string>
# include <iosfwd>
# include <cstddef>
#include <iostream>

template<typename T>
void iter(T* tabPtr, std::size_t tabSize, void (*funPtr)(T &))
{
	for (size_t i = 0; i < tabSize; i++)
	{
		funPtr(tabPtr[i]);
	}
	return;
}

template<typename U>
void printValue(U & value)
{
	std::cout << "Value = " << value << std::endl;
	return;
}

template<typename R> // chequear porque no funciona como deberaia
void addPlusOne(R & value)
{
	std::cout << "Changing " << value << " to " << value << " + 1";
	value += 1;
	std::cout << " ===> New value: " << value << std::endl;
	return;
}

#endif
