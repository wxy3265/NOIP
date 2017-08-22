#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
	using namespace std;

	double a;
	double b;

	float c;

	cin >> a >> b;

	c = fmod(a, b);

	printf("%1.2f", c);

	return 0;
}

