#include <iostream>

using namespace std;

int main()
{

    int a[100][100];

    int i, j;
    int count = 1;
    bool down = true;
    int n;

    cin >> n;

    while(i != n - 1 && j != n - 1) {
        a[i][j] = count;
        count++;
        if (down) {
            if (i + 1 < n) {
                i++;
            } else {
                down = false;
            }
            if (j - 1 >= 0) {
                j--;
            } else {
                down = false;
            }
        } else {
            if (i - 1 >= 0) {
                i--;
            } else {
                down = true;
            }
            if (j + 1 < n) {
                j++;
            } else {
                down = true;
            }
        }
    }

    for (i = 0; i < n; i++)  {
        for (j = 0; j < n; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}

