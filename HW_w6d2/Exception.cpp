#include "Exception.h"
#include <iostream>
void ArraySizeException::GetMessage() const
{
	std::cout << "Array is not 4x4!\n";
}

void ArrayDataException::GetMessage() const
{
	std::cout << message << " in " << ia << "x" << ja << "section!\n";
}

void Exception::GetMessage() const
{
	std::cout << "Error!\n";
}
