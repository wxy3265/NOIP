#include <iostream>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int color[n];
    int number[n];
    int point = 0;
    int x, z;
    int i, j, k;

    for (i = 0; i < n; i++) {
        cin >> number[i];                       
    }
    for (i = 0; i < n; i++) {
        cin >> color[i];
    }

    for (x = 0; x < n; x++) {
        for (z = x + 2; z < n; z += 2) {
            if (color[x] == color[z])
                point += (x + z + 2) * (number[x] + number[z]) % 10007;
        }
    }

    cout << point % 10007 << endl;

    return 0;
}
