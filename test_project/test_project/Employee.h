#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	float salary;
	int age, departmentID;
public:
	static int EmployeesCount;
	void set(string n);
	string getName();

	void set(float s);
	float getSalary();

	void setAge(int a);
	int getAge();

	void setDepartmentID(int id);
	int getDepartmentID();

	float addSalary(Employee e);
	float operator ++();
	float operator ++(int);
	Employee operator +(Employee e2);
	Employee();
	Employee(string n, float s, int a, int id);
};
