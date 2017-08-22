#include <iostream>
#include <string>

int main()
{
	using namespace std;

	int a;

	cin >> a;

	string week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

	a--;

	cout << week[a];


	return 0;
}

