#include <iostream>

int main() 
{
	long gb = 3430780928;
	long divisor = 1;
	for (int i=1; i <=31; ++i) 
	{
		divisor *= 2;
	}

	gb /= divisor;
	std::cout << gb;
}
