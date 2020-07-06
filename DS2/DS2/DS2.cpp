#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
using namespace std;
int main()
{
	Vector<int> v;
	v.push_back(3);
	v.push_back(4);
	v.push_back(7);
	cout << v[0];

	return 0;
}