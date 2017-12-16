#include <iostream>

using namespace std;

int a[7][7];
int n, m, t;
int startx, starty, endx, endy;
int ans = 0;

void dfs(int x, int y)
{
    if (a[x][y] == 3 || a[x][y] == 2 || a[x][y] == 1) {
        return ;
    } else if (x == endx && y == endy) {
        ans++;
        return ;
    }

    a[x][y] = 2;

    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);

//    cout << x << "," << y << endl;

    a[x][y] = 0;
    return ;
}

int main()
{
    cin >> n >> m >> t;
    //0为空地，1为障碍物，2为走过的点，3为边界
    int i, j;
    for (i = 1; i <= n + 1; i++) {
        for (j = 1; j <= m + 1; j++) {
            a[i][j] = 0;
        }
    }
    for (i = 0; i <= m + 1; i++) {
        a[0][i] = 1;
        a[n + 1][i] = 3;
    }
    for (i = 0; i <= n + 1; i++) {
        a[i][0] = 3;
        a[i][m + 1] = 3;
    }
    cin >> startx >> starty >> endx >> endy;

    int x, y;
    for (i = 0; i < t; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }

/*    cout << "map" << endl;
    for (i = 0; i <= n + 1; i++) {
        for (j = 0; j <= m + 1; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
*/

    dfs(1, 1);
    cout << ans << endl;

    return 0;
}

