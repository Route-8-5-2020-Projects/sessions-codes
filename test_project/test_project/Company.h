#pragma once
#include "Employee.h"
#include "Department.h"
#include <string>
#include <iostream>
using namespace std;

class Company
{
private:
	int numberOfEmployees, numberOfDepartments;
	Employee employees[100];
	Department departments[100];
public:
	void addDepartment();
	void addEmployee();
	void changeDepartmentOfEmployee();
	void printReport();
	Company();
};

