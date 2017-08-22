#include <iostream>
#include <stdio.h>

int main()
{
	using namespace std;

	double i;
	double good;

	cin >> i;

	if (i <= 100000)
		good = i / 10;
	else if (i <  200000)
		good = 100000 * 0.1 + (i - 100000) * 0.075;
	else if (i < 400000)
		good = 100000 * 0.1 + 100000 * 0.075 + (i - 200000) * 0.05;
	else if (i < 600000)
		good = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (i - 400000) * 0.03;
	else if (i < 1000000)
		good = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (i - 600000) * 0.015;
	else
		good = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (i - 1000000) * 0.01;

	printf("%1.3lf", good);

	return 0;
}

