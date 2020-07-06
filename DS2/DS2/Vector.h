#pragma once
template <class T>
class Vector
{
private:
	T* arr;
	int sz, cap;
	void doubling();
public:
	void push_back(T val);
	void pop_back();
	int size();
	T back();
	T& operator [](int i);
	Vector();
};

