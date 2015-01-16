//Divides gb by two each time you say 'y'.
#include <iostream>

int main() {
	long gb = 3430780928;
	char contin = 'y';
	int expCount = 0;

	std::cout << gb << "\n";

	while (contin) 
	{
		gb /= 2;
		expCount += 1;
		std::cout << "You have divided 2^" << expCount << "\n";
		std::cout << "There is " << gb << " left.\n";
		std::cout << "Continue? y/n\n";
		std::cin >> contin;
		if (contin == 'n')
			break;
	}
}
