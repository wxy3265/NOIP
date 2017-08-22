#include <iostream>

using namespace std;

int main()
{

    int g = 0, y = 0, t = 0;
    int ag = 0, ay = 0, at = 0;
    int n;
    int i;

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> g >> y >> t;
        ag += g;
        ay += y;
        at += t;
    }

    cout << ag << ' ' << ay << ' ' << at << ' ' << ag + ay + at;

    return 0;
}

