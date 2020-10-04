#include "Cstudent.h"

void Cstudent::input_stud()
{
	Input();
	cout << "Enter department name" << endl;
	cin >> department;

	cout << "Enter group number" << endl;
	cin >> number;
	cout << endl;
}

void Cstudent::student_info()
{
	cout << "Name " << name << "\nyear " << year << "\ndepartment " << department << "\nNumber " << number << endl << endl;
}

