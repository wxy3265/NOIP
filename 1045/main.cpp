#include <iostream>

using namespace std;

int main()
{

    int n[4][4];
    int ans1 = 0, ans2 = 0;

    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cin >>  n[i][j];
        }
    }

    for (i = 0; i < 4; i++) {
        ans1 += n[i][i];
        //cout << n[i][i] << ',';
    }
    //cout << endl;

    for (i = 0; i < 4; i++) {
        ans2 += n[i][3 - i];
        //cout << n[i][3 - i] << ',' << i << ',' << 4 - i << ';';
    }
    //cout << endl;

    cout << ans1 << ' ' << ans2;
    return 0;
}

