#include "Teacher.h"
#include <iostream>
using namespace std;

void Teacher::setSalary(double s)
{
	salary = s;
}

double Teacher::getSalary()
{
	return salary;
}

void Teacher::setWorkingHours(int w)
{
	workingHours = w;
}

int Teacher::getWorkingHours()
{
	return workingHours;
}


Teacher::Teacher() : Person()
{
	cout << "Teacher Constructor" << endl;
}

