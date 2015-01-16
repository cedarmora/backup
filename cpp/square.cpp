#include "std_lib_facilities.h"

int square(int number)
{
	int result = 0;
	for (int i = 0; i < number; ++i) 
		result += number;
	return result;
}

int main()
{
	int number;
	cout << "Enter a number to square: ";
	cin >> number;
	cout << square(number) << "\n";
}
