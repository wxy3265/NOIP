#include <iostream>
#include <string>
#include <memory.h>
#include <math.h>

using namespace std;

void BubbleSort(int *a, int n);
void BucketSort(int *a, int n, int max);
void InputLinearArray(int *a);
void OutputLinearArray(int *a);

int a[10][10], n;
int ans;

void BubbleSort(int *a, int n)
{

    int i, j;
    int b;
    bool change = false;

    for (i = 1; i < n; i++) {
        for (j = 1; j < n; j++) {
            if (a[j] < a[j -1]) {
                b = a[j];
                a[j] = a[j - 1];
                a[j - 1] = b;
                change = true;
            }
        }
        if(!change)
            break;
        change = false;
    }

    return ;
}

void BucketSort(int a[], int n, int max)
{
    int b[max + 1];
    int input_where = 0;

    memset(b, 0, max);

    int i, j;

    for (i = 0; i < n; i++)
        b[a[i]]++;

    for (i = 1; i <= max; i++) {
        for (j = 0; b[j + 1] != 0; b[j + 1] -= j + 1, j++);
        if (j != 0) {
            a[input_where] = j;
            input_where ++;
        }
    }

    return ;
}

void InputLinearArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    return ;
}

void OutputLinearArray(int *a, int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << a[i];
    return ;
}


void dfs(int x, int y);

void dfs(int x, int y)
{

    if ((x < 0) || (y < 0) || (x >= n) || (y >= n)) {
        return ;
    } else if ((x == 0) && (y == n - 1)) {
        ans++;
        return ;
    }
    //cout<<'['<<x<<','<<y<<']';
    a[x][y] = 2;
    if (x + 1 < n) {
        if (a[x+1][y] == 0) {
            dfs(x+1, y);
        }
    }

    if (y + 1 < n){
        if (a[x][y+1] == 0) {
            dfs(x,y+1);
        }
    }
    
    if (x - 1 >= 0) {
        if (a[x-1][y] == 0) {
            dfs(x-1,y);
        }
    }

    if (y - 1 >= 0) {
        if (a[x][y-1] == 0) {
            dfs(x,y-1);
        }
    }

    if (x + 1 < n && y + 1 < n) {
        if (a[x+1][y+1] == 0) {
            dfs(x+1, y+1);
        }
    }

    if (x + 1 < n && y - 1 >= 0) {
        if (a[x+1][y-1] == 0) {
            dfs(x+1, y-1);
        }
    }

    if (x - 1 >= 0 && y + 1 < n) {
        if (a[x-1][y+1] == 0) {
            dfs(x-1, y+1);
        }
    }

    if (x - 1 >= 0 && y - 1 >= 0) {
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

