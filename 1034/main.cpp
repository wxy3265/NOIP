#include <iostream>

using namespace std;

int main()
{

    int n, a, b, c;//a为十元钞票数量；b为二十元钞票数量；c为五十元钞票数量
    int ans = 0;
    cin >> n;

    for (a = 0; a * 10 <= n; a++) {
        for (b = 0; b * 20 <= n; b++) {
            for (c = 0; c * 50 <= n; c++) {
                if (a * 10 + b * 20 + c * 50 == n) {
                    ans++;
                }
            }
        }
    }

    cout << ans;

    return 0;
}

