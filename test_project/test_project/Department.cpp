#include "Department.h"

void Department::setName(string n)
{
	name = n;
}

string Department::getName()
{
	return name;
}

void Department::setDepartmentID(int id)
{
	departmentID = id;
}

int Department::getDepartmentID()
{
	return departmentID;
}

void Department::setManagerName(string mn)
{
	manager_Name = mn;
}

string Department::getManagerName()
{
	return manager_Name;
}
