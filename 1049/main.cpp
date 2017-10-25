#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int a[n][m];
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    //int b[m][n];
    for (i = 0; i < m; i++) {
        for (j = n - 1; j >= 0; j--) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

