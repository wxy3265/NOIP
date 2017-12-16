#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int color[n + 1];
    int number[n + 1];
    int point = 0;
    int x, y, z;
    int i, j, k;

    for (i = 1; i <= n; i++) {
        cin >> number[i];
    }
    for (i = 1; i <= n; i++) {
        cin >> color[i];
    }

    int flag = color[1];
    bool first = true;
    int nColor[m][n + 1];
    for (i = 0; i < m; i++){
        for (j = 0; j < n + 1; j++) {
            nColor[i][j] = 0;
        }
    }
    nColor[0][1] = 1;
    k = 0;
    int k1 = 2;

    for (i = 1; i <= n; i++) {
        if (color[i] == flag && !first) {
            continue;
        }
        nColor[k][0] = 1;
        nColor[k][1] = i;
        for (j = i + 1; j <= n; j++) {
            if (color[i] == color[j]) {
                nColor[k][k1] = j;
                color[j] = flag;
                k1++;
                nColor[k][0]++;
            }
        }
        k++;
        k1 = 2;
        first = false;
    }

    cout << "~~nColor~~" << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n + 1; j++) {
            cout << nColor[i][j] << " ";
        }
        cout << endl;
    }

    for (i = 0; i < m; i++) {
        if (nColor[i][0] < 3) continue;
        for (k = 1; k < nColor[i][0]; k++) {
            for (j = k + 1; j < nColor[i][0]; j++) {
                if ((nColor[i][j] - nColor[i][k]) % 2 == 0)
                    point += (nColor[i][j] + nColor[i][k]) * (number[nColor[i][j]] + number[nColor[i][k]]) % 10007;
            }
        }
    }

    cout << point % 10007 << endl;

    return 0;
}
