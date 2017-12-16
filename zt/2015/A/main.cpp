#include <iostream>

using namespace std;

int main()
{

    int day;
    cin >> day;
    int coin = 0;

    int i, j, k = 1;
    for (i = 1; k <= day; i++) {
        for (j = 1; j <= i; j++) {
            coin += i;
            k++;
            if (k > day) {
                break;
            }
        }
    }

    cout << coin << endl;

    return 0;
}

