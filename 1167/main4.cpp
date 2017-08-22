#include "wxy.h"

using namespace std;

int a[10][10], n;
int ans;

void dfs(int x, int y);

void dfs(int x, int y)
{

    if ((x < 0) || (y < 0) || (x >= n) || (y >= n)) {
        return ;
    } else if ((x == 0) && (y == n - 1)) {
        ans++;
        return ;
    }

    a[x][y] = 2;
    if(x + 1 < n) {
        if (a[x+1][y] == 0) {
            dfs(x+1, y);
        }
    }

    if (y + 1 < n){
        if (a[x][y+1] == 0) {
            dfs(x,y+1);
        }
    }
    
    if (x - 1 < 0) {
        if (a[x-1][y] == 0) {
            dfs(x-1,y);
        }
    }

    if (y - 1 < 0) {
        if (a[x][y-1] == 0) {
            dfs(x,y-1);
        }
    }

    if (x + 1 < n && y + 1 < n) {
        if (a[x+1][y+1] == 0) {
            dfs(x+1, y+1);
        }
    }

    if (x + 1 < n && y - 1 < n) {
        if (a[x+1][y-1] == 0) {
            dfs(x+1, y-1);
        }
    }

    if (x - 1 < n && y + 1 < n) {
        if (a[x-1][y+1] == 0) {
            dfs(x-1, y+1);
        }
    }

    if (x - 1 < n && y - 1 < n) {
        if (a[x-1][y-1] == 0) {
            dfs(x-1, y-1);
        }
    }

    a[x][y] = 0;

    return ;
}

int main()
{
    int i;

    cin >> n;
    for (i = 0; i < n; i++) {
        InputLinearArray(a[i], n);
    }

    dfs(0, 0);

    cout << ans;

    return 0;
}

