#include <iostream>

using namespace std;

int main()
{
    const int n = 5;
    int a[n][n];
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int max = a[0][0], min = a[0][0];
    int maxnum[2] = {0, 0}, minnum[2] = {0, 0};
    bool flag = false;
    int lj;
    bool change = false;
    for (i = 0; i < n; i++) {
        max = a[i][0], maxnum[0] = i, maxnum[1] = 0, change = false;
        for (j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                maxnum[0] = i;
                maxnum[1] = j;
                lj = j;
                change = true;
            }
        }
        if (!flag) {
            lj = 0;
        }
        min = a[j][lj], maxnum[0] = j, maxnum[1] = lj;
        for (j = 0; j < n; j++) {
            if (a[j][lj] < min) {
                min = a[j][lj];
                minnum[0] = j;
                minnum[1] = lj;
            }
        }
        if (maxnum[0] == minnum[0] && maxnum[1] == minnum[1]) {
            cout << maxnum[0] + 1 << " " << maxnum[1] + 1 << " " << max << endl;
            flag = true;
        }
    }

    if (!flag) {
        cout << "not found" << endl;
    }

    return 0;
}

