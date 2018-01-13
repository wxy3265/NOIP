#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    b += a * 60;
    d += c * 60;
    int e, f;
    f = d - b;
    e = f / 60;
    f = f % 60;
    cout << e << " " << f << endl;
    return 0;
}

