#include <iostream>
#include "Vector.h"
#include "Vector.cpp"
#include "BST.h"
#include "BST.cpp"
using namespace std;
int main()
{
	BST<int> bst;
	bst.insert(5);
	bst.insert(4);
	bst.insert(4);
	bst.insert(7);
	bst.insert(6);
	bst.insert(8);

	if (bst.find(7))
	{
		cout << "Nice" << endl;
	}
	else
	{
		cout << "wrong answer" << endl;
	}
	return 0;
}