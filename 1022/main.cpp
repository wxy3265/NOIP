#include <iostream>
#include <stdio.h>

int main()
{
	using namespace std;

	int number;
	int i;
	int age;
	float allage = 0.0f;
	
	cin >> number;

	for (i = 0; i < number; i++) {
		cin >> age;
		allage += age;

	}

	allage /= number;

	printf("%1.2f", allage);

	return 0;
}
