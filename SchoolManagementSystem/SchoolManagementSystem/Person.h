#pragma once
#include <string>
using namespace std;
class Person
{
private:
	int id;
	static int personsCount;
	string name, email, address, mobile;
public:
	int getID();
	
	void setName(string n);
	string getName();

	void setEmail(string n);
	string getEmail();

	void setAddress(string n);
	string getAddress();

	void setMobile(string n);
	string getMobile();

	void displayInfo();

	Person();
};

