#include "Stack.h"
#include <assert.h>

template <class T>
T Stack<T>::top()
{
	assert(empty() == false);
	return head->value;
}

template <class T>
void Stack<T>::pop()
{
	assert(empty() == false);
	Node<T>* tmp = head;
	head = head->next;
	delete tmp;
	sz--;
}

template <class T>
void Stack<T>::push(T val)
{
	Node<T>* newNode = new Node<T>(val);
	newNode->next = head;
	head = newNode;
	sz++;
}

template <class T>
bool Stack<T>::empty()
{
	if (sz == 0)
		return true;
	else
		return false;
}

template <class T>
int Stack<T>::size()
{
	return sz;
}

template <class T>
Stack<T>::Stack() : head(nullptr), sz(0)
{
}

template <class T>
Stack<T>::~Stack()
{
	while (empty() == false)
	{
		pop();
	}
}
