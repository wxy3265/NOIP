#include <iostream>

int main()
{
	using namespace std;

	float x, y;

	cin >> x >> y;

	if (x >= -1 && x <= 1 && y>= -1 && y <= 1)
		cout << "Yes";

	else
		cout << "No";

	return 0;
}

