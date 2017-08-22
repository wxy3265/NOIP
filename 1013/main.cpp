#include <iostream>

int main()
{
	using namespace std;

	int a, b, c;

	cin >> a >> b >> c;

	if (!(a + b > c && a + c > b && b + c > a))
		cout << "NO";
	else if (a * a + b * b == c * c)
		cout << "Right"; 
	else if (a == b && a == c)
		cout <<  "Equilateral";
	else
		cout <<"General";

	return 0;
}

