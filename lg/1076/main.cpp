#include <iostream>
#include <cstring>

using namespace std;

int next(int floor, bool *ups, int *build)
{
	int ans, add = build[floor][room];
	if (floor < 0) {
		return 0;
	}
	int i, jd = 0;
	for (i = room;jd < build[floor][room]; i++) {
		 if (upd[floor + 1]) {
		 	jd++;
		 }
	}
	ans = next(floor + 1, i);
	return ans + add;
}

int main()
{
	int n, m;
	cin >> n >> m;
	bool ups[n][m];
	int build[n][m];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> ups[n - i][m - j] >> build[n - i][m - j];
		}
	}
	
	cout << next(0, 0, ups, build) << endl;
	
	return 0;
}
