#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int color[n];
    int number[n];
    int point = 0;
    int x, y, z;
    int i, j, k;

    for (i = 0; i < n; i++) {
        cin >> number[i];                       
    }
    for (i = 0; i < n; i++) {
        cin >> color[i];
    }

    for (x = 1; x <= n; x++) {
        for (y = x + 1; y <= n; y++) {
            for (z = y + 1; z <= n; z++) {
                if (y - x == z - y && color[x - 1] == color[z - 1]) {
                    //cout << x << "," << y << "," << z << endl;
                    point += (x + z) * (number[x - 1] + number[z - 1]) % 10007;
                }
            }
        }
    }

    cout << point % 10007 << endl;

    return 0;
}
