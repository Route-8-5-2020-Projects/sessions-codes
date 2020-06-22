#pragma once
class Distance
{
private:
	int m, cm;
public:
	void setM(int meter);
	int getM();

	void setCM(int centi);
	int getCM();

	void add(int a);
	void add(int a, int b);

	Distance operator +(Distance d2);

	Distance operator ++();

	void print();
};

