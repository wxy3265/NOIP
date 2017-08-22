#include <iostream>

int main()
{
	using namespace std;

	int boy, girl;

	cin >> boy >> girl;

	if (boy + girl < 10)
		cout << "water";
	else if(boy > girl)
		cout << "tree";
	else
		cout << "tea";

	return 0;
}

