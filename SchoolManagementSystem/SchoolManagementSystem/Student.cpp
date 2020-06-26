#include "Student.h"
#include <iostream>
#include "Teacher.h"
using namespace std;

void Student::setGrade(int g)
{
	grade = g;
}

int Student::getGrade()
{
	return grade;
}

void Student::setGPA(double g)
{
	GPA = g;
}

double Student::getGPA()
{
	return GPA;
}



Student::Student()
{
	cout << "Student Constructor" << endl;
}
