#include "Company.h"

void Company::addDepartment()
{
	int departmentId;
	string name, manager_name;

	cout << "Please enter the department id" << endl;
	cin >> departmentId;
	cout << "Please enter the department name" << endl;
	cin >> name;
	cout << "Please enter the manager name" << endl;
	cin >> manager_name;

	Department department;
	department.setDepartmentID(departmentId);
	department.setName(name);
	department.setManagerName(manager_name);

	departments[numberOfDepartments] = department;
	numberOfDepartments++;
}

void Company::addEmployee()
{
	int departmentId, age;
	string name;
	float salary;

	cout << "Please enter the employee name" << endl;
	cin >> name;
	cout << "Please enter the salary" << endl;
	cin >> salary;
	cout << "Please enter the age" << endl;
	cin >> age;
	cout << "Please enter the department id" << endl;
	cin >> departmentId;

	Employee employee;
	employee.setName(name);
	employee.setAge(age);
	employee.setDepartmentID(departmentId);
	employee.setSalary(salary);

	employees[numberOfEmployees] = employee;
	numberOfEmployees++;
}

void Company::changeDepartmentOfEmployee()
{
	string employeeName;
	int departmentID;
	cout << "Please enter the employee name" << endl;
	cin >> employeeName;
	cout << "Please enter the departmentID" << endl;
	cin >> departmentID;

	for (int i = 0; i < numberOfEmployees; i++)
	{
		if (employees[i].getName() == employeeName)
		{
			employees[i].setDepartmentID(departmentID);
			break;
		}
	}
}

void Company::printReport()
{
	for (int i = 0; i < numberOfDepartments; i++)
	{
		Department currentDepartment = departments[i];
		int employeesCount = 0;
		for (int j = 0; j < numberOfEmployees; j++)
		{
			if (employees[j].getDepartmentID() == currentDepartment.getDepartmentID())
			{
				employeesCount++;
			}
		}

		cout << currentDepartment.getName() << " has " << employeesCount << " employees." << endl;
	}
}

Company::Company() : numberOfEmployees(0), numberOfDepartments(0)
{
}
