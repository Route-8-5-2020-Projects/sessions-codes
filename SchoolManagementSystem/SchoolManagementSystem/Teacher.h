#pragma once
#include "Person.h"
class Teacher : public virtual Person
{
private:
	double salary;
	int workingHours;
public:
	void setSalary(double s);
	double getSalary();


	void setWorkingHours(int w);
	int getWorkingHours();

	Teacher();
};

