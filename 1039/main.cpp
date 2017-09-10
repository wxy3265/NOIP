#include <iostream>

using namespace std;

int main()
{

    int n, i;
    int a = 1;
    cin >> n;

    for (i = 0; i < n; i++) {
        a *= 2;
    }

    cout << a;

    return 0;
}

