#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int n, d, k;
    cin >> n >> d >> k;
    int far[n], box[n];
    int score = 0;
    int i;
    for (i = 0; i < n; i++) {
        cin >> far[i] >> box[i];
    }
    int g;
    int wz = 0;
    for (g = 0; g < far[n - 1]; g++) {
        wz = 0;
        for (i = 0; wz < far[n - 1]; i++) {
            wz += d + g;
            ;
        }
        if ()
    }
    return 0;
}

