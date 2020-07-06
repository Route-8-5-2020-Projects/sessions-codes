#pragma once
#include "Node.h"
#include "Node.cpp"
template <class T>
class Stack
{
private:
	Node<T>* head;
	int sz;
public:
	T top();
	void pop();
	void push(T val);
	bool empty();
	int size();
	Stack();
	~Stack();
};

