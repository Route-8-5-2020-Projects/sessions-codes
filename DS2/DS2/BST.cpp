#include "BST.h"
#include <iostream>
using namespace std;
template<class T>
void BST<T>::insert(T val)
{
	Node<T>* newNode = new Node<T>(val);
	if (root == nullptr)
	{
		root = newNode;
	}
	else
	{
		Node<T>* currentNode = root;
		while (true)
		{
			if (val > currentNode->value)
			{
				if (currentNode->right != nullptr)
				{
					currentNode = currentNode->right;
				}
				else
				{
					currentNode->right = newNode;
					sz++;
					return;
				}
			}
			else if (val < currentNode->value)
			{
				if (currentNode->left != nullptr)
				{
					currentNode = currentNode->left;
				}
				else
				{
					currentNode->left = newNode;
					sz++;
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
}

template<class T>
bool BST<T>::find(T val)
{
	if (root == nullptr)
	{
		return false;
	}
	else
	{
		Node<T>* currentnode = root;
		while (true)
		{
			if (val > currentnode->value)
			{
				if (currentnode->right == nullptr)
				{
					return false;
				}
				else
				{
					currentnode = currentnode->right;
				}
			}
			else if(val < currentnode->value)
			{
				if (currentnode->left == nullptr)
				{
					return false;
				}
				else
				{
					currentnode = currentnode->left;
				}
			}
			else
			{
				return true;
			}
		}
	}
}

template<class T>
BST<T>::BST() : sz(0), root(nullptr)
{

}
