#pragma once
template <class T>
class Node
{
public:
	T value;
	Node<T>* left;
	Node<T>* right;
	Node(T val);
};

template<class T>
inline Node<T>::Node(T val) : value(val), left(nullptr), right(nullptr)
{
}
