#include <iostream>
#include "Company.h"
using namespace std;

int getOption()
{
	cout << "Please select option from the following options" << endl;
	cout << "Option 1 to add department" << endl;
	cout << "Option 2 to add employee" << endl;
	cout << "Option 3 to change department of employee" << endl;
	cout << "Option 4 to print report of departments" << endl;
	cout << "Option 5 to close the program" << endl;
	int option;
	cin >> option;
	return option;
}

int main()
{
	Company company;
	bool run = true;
	while (run == true)
	{
		int option = getOption();

		switch (option)
		{
		case 1:
			company.addDepartment();
			break;
		case 2:
			company.addEmployee();
			break;
		case 3:
			company.changeDepartmentOfEmployee();
			break;
		case 4:
			company.printReport();
			break;
		case 5:
			run = false;
			break;
		default:
			cout << "Sorry we didn't understand your choice" << endl;
		}

	}
	return 0;
}
