#include <iostream>

int main()
{
	using namespace std;

	int input;

	cout << "[1] apples" << endl
		 << "[2] pears" << endl
		 << "[3] oranges" << endl
		 << "[4] grapes" << endl
		 << "[0] Exit" << endl;

	cin >> input;

	
	if (input == 1)
		cout << "price=3.0" << endl;
	else if (input == 2)
		cout << "price=2.5" << endl;
	else if (input == 3)
		cout << "price=4.1" << endl;
	else if (input == 4)
		cout << "price=10.2" << endl;
	else if (input == 0)
		return 0;
	else
		cout << "price=0" << endl;

	return 0;
}

