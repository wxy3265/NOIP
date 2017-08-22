#include <iostream>

void dfs(int x, int y);

int ans = 0;
int n;
int a[10][10];

void dfs(int x, int y)
{

    using namespace std;

    int i, j;

    if (x > n || y > n)
        return ;
    else if(x == n && y == 0) {
        ans++;
        cout<<endl;
        return;
    } else {
        for (i = 1; i <= 4; i++) {
            if (!(x + 1 >= n || y + 1 >= n || x - 1 == 0 || y - 1 == 0)) {
                if (i == 1 && a[x + 1][y] == 0){
                    cout<<"right,";
                    dfs(x + 1, y);
                }if (i == 2 && a[x][y + 1] == 0){
                    cout<<"down,";
                    dfs(x, y + 1);
                }if (i == 3 && a[x - 1][y] == 0){
                    cout<<"left,";
                    dfs(x - 1, y);
                }if (i == 4 && a[x][y - 1] == 0){
                    cout<<"up,";
                    dfs(x, y - 1);
                }
            }else{
                cout<<endl;
                break;
            }
        }
    }

    return ;
}

int main()
{
	using namespace std;

    int i, j;

    cin >> n;

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> a[i][j];

    dfs(0, 0);

    cout << ans;

	return 0;
}

