#include <iostream>
#include <stdio.h>

int main()
{
	using namespace std;

	float R, X, P;
	float Y;
	int i;

	cin >> R >> X >> P;

	Y = X; 
	for (i = 0;i < P;i ++) 	
		Y *= ((100 + R) / 100);

	printf("%1.2f", Y);

	return 0;
}

