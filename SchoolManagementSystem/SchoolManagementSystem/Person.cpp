#include "Person.h"
#include <iostream>
using namespace std;

int Person::personsCount = 0;

int Person::getID()
{
	return id;
}

void Person::setName(string n)
{
	name = n;
}

string Person::getName()
{
	return name;
}

void Person::setEmail(string n)
{
	email = n;
}

string Person::getEmail()
{
	return email;
}

void Person::setAddress(string n)
{
	address = n;
}

string Person::getAddress()
{
	return address;
}

void Person::setMobile(string n)
{
	mobile = n;
}

string Person::getMobile()
{
	return mobile;
}

void Person::displayInfo()
{
	cout << name << endl;
}


Person::Person()
{
	cout << "Person Constructor" << endl;
	personsCount++;
	id = personsCount;
}
