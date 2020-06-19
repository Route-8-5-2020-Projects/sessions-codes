#include "Employee.h"

void Employee::setName(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::setSalary(float s)
{
	salary = s;
}

float Employee::getSalary()
{
	return salary;
}

void Employee::setAge(int a)
{
	age = a;
}

int Employee::getAge()
{
	return age;
}

void Employee::setDepartmentID(int id)
{
	departmentID = id;
}

int Employee::getDepartmentID()
{
	return departmentID;
}
