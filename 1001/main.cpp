#include <iostream>
#include <stdio.h>

int main()
{
    using namespace std;

	float input;
	float output;
	
	cin >> input;

	output = input - 32;
	output *= 5;
	output /= 9;
	
	printf("%1.4f", output);

    return 0;
}

