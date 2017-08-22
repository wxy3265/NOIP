#include <iostream>

int main()
{
	using namespace std;

	int input, output = 0;
	int i, j;

	cin >> input;

	for (i = 1; i <= input; i++) {
		if (input % i == 0)
			output ++;
	}

	cout << output;

	return 0;
}

