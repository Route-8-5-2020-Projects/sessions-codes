#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	freopen("session.txt", "w", stdout);
	int option;
	while (true)
	{
		cin >> option;
		if (option == 0)
			break;
		string s;
		cin.ignore();
		cin >> s;
		cout << s << endl;
	}
	return 0;
}