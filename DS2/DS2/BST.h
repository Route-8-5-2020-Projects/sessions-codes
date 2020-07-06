#pragma once
#include "Node.h"
#include "Node.cpp"
template <class T>
class BST
{
private:
	Node<T>* root;
	int sz;
public:
	void insert(T val);
	bool find(T val);
	BST();
};

