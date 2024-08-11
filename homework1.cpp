#include <iostream>
using namespace std;

int main()
{
	// TODO 1: Create and initialize a variable to represent the name of the volunteer
	string name_of_volunteer = "Abdullah";

	// TODO 2: Create and initialize three more variables
	double hours = 20.5;
	const float unit_rate = 0.5;
	double units = hours * unit_rate;

	// TODO 3: Create and initialize the next three variables
	const int total = 45;
	double left_over_units = total - units;
	double left_over_hours = left_over_units / unit_rate;

	// TODO 4: Create and initialize the final two variables
	const double pay_rate = 10.50;
	double total_pay = hours * pay_rate;

	// TODO 5: Print out all the information about the student volunteer
	cout << "He volunteered a total of " << hours << " hours this week" << endl << endl;
	cout << "His class uses the rate " << unit_rate << " units per volunteer hour" << endl << endl;
	cout << "This week he earned " << units << " units for volunteering\n\n";
			cout << "units = hours * unit_rate = " << hours * unit_rate << endl << endl;

	cout << "His class requires a total of " << total << " units for the semester\n\n";
	cout << "After this week, he only needs " << left_over_units << " units to finish his goal\n\n";
			cout << "left_over_units = total - units = " << total - units << endl << endl;

	cout << "This calculates to " << left_over_hours << " volunteering hours remaining this semester.\n\n";
			cout << "left_over_hours = left_over_units / unit_rate = " << left_over_units / unit_rate << endl << endl;

	cout << "If this was a job that pays " << pay_rate << " dollars per hour, "
			<< "he would have earned " << total_pay << " dollars this week\n\n";

		cout << "total_pay = hours * pay_rate = " << hours * pay_rate << endl;




	// terminate
	return 0;
}
