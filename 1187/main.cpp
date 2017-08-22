#include <iostream>

using namespace std;

int ans;
int m, n;
int alnum;
int numbers[50];
int adnum;
bool flag = false;

void dfs(int step)
{
	
	int i;
	
	if (step > m - 1) {
		if(alnum == n) {
			ans ++;
			for(i = 0; i < 3; i++)
					cout << numbers[i] << ',';
			cout << endl;
		}
		return ;
	}
	
	for (i = 1; i < n; i++) {
		if (i + alnum <= n) {
			numbers[step] = i;
			alnum += i;
			dfs(step + 1);
			alnum -= i;
		}	
	}
	
	return ;
}

int main()
{
	
	cin >> n >> m;
	
	dfs(0);
	
	cout << ans;
	
	getchar();getchar();
	
	return 0;
}

