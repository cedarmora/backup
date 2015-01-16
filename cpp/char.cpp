#include "std_lib_facilities.h"

int main()
{
	int char_int;
	for (char character = 'a'; character <= 'z'; ++character) {
		char_int = character;
		cout << character << '\t' << char_int << '\n';
	}
}
