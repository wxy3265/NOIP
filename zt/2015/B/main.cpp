#include <iostream>

using namespace std;

int main()
{

    char a[102][102];
    int i, j;

    for (i = 0; i < 102; i++) {
        for (j = 0; j < 102; j++) {
            a[i][j] = '?';
        }
    }

    int n , m;
    cin >> n >> m;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    int k;
    int ans = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (a[i][j] == '?'){
                if (a[i - 1][j - 1] == '*')
                    ans++;
                if (a[i - 1][j] == '*')
                    ans++;
                if (a[i - 1][j + 1] == '*')
                    ans++;
                if (a[i][j - 1] == '*')
                    ans++;
                if (a[i][j + 1] == '*')
                    ans++;
                if (a[i + 1][j - 1] == '*')
                    ans++;
                if (a[i + 1][j] == '*')
                    ans++;
                if (a[i + 1][j + 1] == '*')
                    ans++;
                a[i][j] = ans + 48;
                ans = 0;
            }
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}

