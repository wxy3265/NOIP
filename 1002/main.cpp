#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
	using namespace std;

	float a, b, c;
	float p;
	float s;

	cin >> a >> b >> c;
		
	p = a + b + c;
	p /= 2;

	s = p * (p - a) * (p - b) * (p - c);
	
	s = sqrt(s);

	printf("%1.4f", s);

	return 0;
}


