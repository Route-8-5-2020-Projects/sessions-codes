#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T>* next;
	Node(T val);
};

