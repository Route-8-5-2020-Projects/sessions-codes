#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    LinkedList list;
    list.append(7);
    list.append(0);
    list.append(9);
    list.insert(5, 8);
    list.print();
 	return 0;
}