#include <iostream>
#include <string>
#include "ArrayValueCalculator.h"
#include "Exception.h"
using namespace std;

int main()
{
	string str[4][4];
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			str[i][j] = "1";
		}
		str[2][1] = "1a";
	}
	try {
		ArrayValueCalculator s;
		
			throw ArraySizeException("s");
		
		s.doCalc(str);
	}
	catch (ArraySizeException s) {
		s.GetMessage();
	}
	catch (ArrayDataException d) {
		d.GetMessage();
	}
}
