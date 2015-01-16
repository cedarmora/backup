#include "std_lib_facilities.h"

int main()
{
	constexpr float cm_to_m = 1.0/100;
	constexpr float in_to_cm = 2.54;
	constexpr float ft_to_in = 12.0;
	double smallest, largest;
	double current;
	string unit;
	double sum = 0;
	vector<double> input_list;

	largest = smallest = 0;

	for (int i = 0; cin >> current >> unit; ++i) {
		

		if (unit == "m")
			; //No need to convert meters to meters
		else if (unit == "in")
			current = current * in_to_cm * cm_to_m;
		else if (unit == "cm")
			current *= cm_to_m;
		else if (unit == "ft")
			current = current * ft_to_in * in_to_cm * cm_to_m;
		else {
			cout << "invalid unit\n";
			continue;
		}
		input_list.push_back(current);
		
		sum += current;

		cout << current << " meters\n";

		if (current <= smallest || i == 0) {
			smallest = current;
			cout << "the smallest so far\n";
		}

		if (current >= largest || i == 0) {
			largest = current;
			cout << "the largest so far\n";
		}

	}

	sort(input_list);
	cout << "Inputs so far:\n";
	for(double x : input_list)
		cout << x << "m ";
	putchar('\n');

	cout << "Smallest input: " << smallest << " meters\n"
	     << "Largest input: " << largest << " meters\n"
	     << "Number of values: " << input_list.size() << '\n'
	     << "Sum of inputs: " << sum << " meters\n";
}
/*
		if (firstnu > secondnu) {
			smaller = secondnu;
			larger = firstnu;
		}
		else if (secondnu > firstnu) {
			smaller = firstnu;
			larger = secondnu;
		}
		else if (firstnu == secondnu) {
			cout << "The numbers are equal\n";
			continue;
		}
		cout << "The smaller value is: " << smaller << '\n';
		cout << "The larger value is: "  << larger << '\n';
		if (larger - smaller < 1.0/100)
			cout << "the numbers are almost equal\n";
*/
