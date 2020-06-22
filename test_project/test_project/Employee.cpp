#include "Employee.h"
#include <iostream>
using namespace std;

int Employee::EmployeesCount = 0;
void Employee::set(string n)
{
	name = n;
}

string Employee::getName()
{
	return name;
}

void Employee::set(float s)
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

float Employee::addSalary(Employee e)
{
	float sum = e.getSalary() + salary;
	return sum;
}

float Employee::operator++()
{
	salary++;
	return salary;
}

float Employee::operator++(int)
{
	float result = salary;
	salary++;
	return result;
}

Employee Employee::operator+(Employee e2)
{
	Employee result;
	result.age = age;
	result.name = name;
	result.departmentID = departmentID;
	result.salary = salary + e2.getSalary();
	return result;
}

Employee::Employee()
{
	EmployeesCount++;
}

Employee::Employee(string n, float s, int a, int id) : name(n), salary(s), age(a), departmentID(id)
{
}
