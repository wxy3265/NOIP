#include <iostream>

using namespace std;

int main()
{

    int n, i, j = 0, m;
    int ans = 0;
    cin >> n;
    m = n;

    do {
        m /= 10;
        j++;
    } while (m > 0);

    for (i = 0; i < j; i++){
        ans += n % 10;
        n /= 10;
    }

    cout << ans;

    return 0;
}

