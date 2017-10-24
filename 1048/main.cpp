#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n][n];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cin >> a[i][j];
    }

    int count;
    bool flag = false, flag2 = true;
    int change[2];

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            count += a[i][j];
        }
        if (count % 2 != 0) {
            if (flag) {
                cout << "Corrupt" << endl;
                return 0;
            } else {
                change[0] = i + 1;
                flag = true;
            }
            flag2 = false;
        }
    }

    flag = false;
    for (j = 0; j < n; j++) {
        count = 0;
        for (i = 0; i < n; i++) {
            count += a[i][j];
        }
        if (count % 2 != 0) {
            if (flag) {
                cout << "Corrupt" << endl;
                return 0;
            } else {
                change[1] = j + 1;
                flag = true;
            }
            flag2 = false;
        }
    }

    if (flag2) {
        cout << "OK" << endl;
    } else {
        cout << change[0] << ' ' << change[1] << endl;
    }

    return 0;
}

