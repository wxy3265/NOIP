#include <iostream>

using namespace std;

int main()
{

    int c, r, n;
    cin >> c >> r >> n;
    string a[c + 1];

    int i, j, k;

    for (i = 1; i <= c; i++) {
        cin >> a[i];
    }

    //R为石头，S为剪刀，P为布
    for (i = 0; i < n; i++) {
        for (j = 1; j <= c; j++) {
            for (k = 1; k <= r; k++) {
                if (a[j][k] == 'R') {
                    //上
                    if (a[j + 1][k] == 'S') {
                        a[j + 1][k] = 'R';
                    } else if (a[j + 1][k] == 'P') {
                        a[j + 1][k] = 'P';
                    }
                    //下
                    if (a[j - 1][k] == 'S') {
                        a[j - 1][k] = 'R';
                    } else if (a[j - 1][k] == 'P') {
                        a[j - 1][k] = 'P';
                    }
                    //左
                    if (a[j][k + 1] == 'S') {
                        a[j][k + 1] = 'R';
                    } else if (a[j][k + 1] == 'P') {
                        a[j][k + 1] = 'P';
                    }
                    //右
                    if (a[j][k - 1] == 'S') {
                        a[j][k - 1] = 'R';
                    } else if (a[j][k - 1] == 'P') {
                     i   a[j][k - 1] = 'P';
                    }
                }
                if (a[j][k] == 'S') {
                    //上
                    if (a[j + 1][k] == 'S') {
                        a[j + 1][k] = 'R';
                    } else if (a[j + 1][k] == 'P') {
                        a[j + 1][k] = 'P';
                    }
                    //下
                    if (a[j - 1][k] == 'S') {
                        a[j - 1][k] = 'R';
                    } else if (a[j - 1][k] == 'P') {
                        a[j - 1][k] = 'P';
                    }
                    //左
                    if (a[j][k + 1] == 'S') {
                        a[j][k + 1] = 'R';
                    } else if (a[j][k + 1] == 'P') {
                        a[j][k + 1] = 'P';
                    }
                    //右
                    if (a[j][k - 1] == 'S') {
                        a[j][k - 1] = 'R';
                    } else if (a[j][k - 1] == 'P') {
                        a[j][k - 1] = 'P';
                    }
                }
            }
        }
    }

    for (i = 1; i <= c; i++) {
        cout << a[i] << endl;
    }

    return 0;
}

