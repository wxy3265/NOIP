#include <iostream>

int n;
bool boxes[30]; //U:true;L:false
int ans = 0;
int i;

using namespace std;

void dfs(int step);

void dfs(int step)
{
	
	if (step > n) {
		cout << boxes << endl;
		ans ++;
		return ;
	}

	for (i = 0; i < n - 3; i++) {
	
		boxes[i] = false;

		dfs(step + 1);

		boxes[i] = true;

	}

	return ;
}

int main()
{
	for (i = 0; i < 30; i++)
		boxes[i] = true;

	cin >> n;

	dfs(0);

	ans *= n - 1;

	cout << ans;

	return 0;
}

/*

   算法：从第一个盒子开始判断，如果总铀数大于3,则将面前的盒子改为铅,并算作一种方案;
		 否则,从上次搜索结束的盒子开始搜索,遇到铅则改为铀,并算作一种方案,
		 直至面前的盒子是最后一个盒子的下一个盒子,输出总方案数,然后退出.

*/
