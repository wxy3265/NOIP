#include <iostream>

using namespace std;

int main()
{

    int a[14], i, input;

    for (i = 0; i < 14; i++)
        a[i] = 0;

    for (i = 0; i < 25; i++) {
        cin >> input;
        a[input]++;
    }

    for (i = 1; i < 14; i++) {
        if (a[i] < 2) {
            cout << i;
            break;
        }
    }

    return 0;
}

