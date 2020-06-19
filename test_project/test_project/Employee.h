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
	void setName(string n);
	string getName();

	void setSalary(float s);
	float getSalary();

	void setAge(int a);
	int getAge();

	void setDepartmentID(int id);
	int getDepartmentID();
};
