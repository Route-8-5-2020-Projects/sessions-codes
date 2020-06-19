#pragma once
#include<string>
using namespace std;
class Department
{
private:
	string name;
	int departmentID;
	string manager_Name;
public:
	void setName(string n);
	string getName();

	void setDepartmentID(int id);
	int getDepartmentID();


	void setManagerName(string mn);
	string getManagerName();
};

