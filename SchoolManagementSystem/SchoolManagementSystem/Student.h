#pragma once
#include "Person.h"
class Student : public virtual Person
{
private:
	int grade;
	double GPA;
public:
	void setGrade(int g);
	int getGrade();

	void setGPA(double g);
	double getGPA();

	Student();
};

